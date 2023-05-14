#include "Team.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <limits>
using namespace std;

namespace ariel
{
    Character *Team::findClosestLivingCharacter(const Character *character, const std::vector<Character *> &characters) const
    {
        double minDistance = std::numeric_limits<double>::max();
        Character *closestCharacter = nullptr;

        for (Character *enemy : characters)
        {
            if (enemy->isAlive())
            {
                double distance = character->distance(enemy);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    closestCharacter = enemy;
                }
            }
        }

        return closestCharacter;
    }

    void Team::chooseNewLeader()
    {
        Character *newLeader = nullptr;
        double minDistance = std::numeric_limits<double>::max();

        for (Character *fighter : fighters_)
        {
            if (fighter->isAlive())
            {
                double distance = leader_->distance(fighter);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    newLeader = fighter;
                }
            }
        }

        leader_ = newLeader;
    }

    Team::Team(Character *leader) : leader_(leader)
    {
        fighters_.push_back(leader);
    }

    void Team::add(Character *fighter)
    {
        if (fighters_.size() < MAX_FIGHTERS)
        {
            fighters_.push_back(fighter);
        }
    }

    void Team::attack(Team *enemyTeam)
    {
        if (!leader_->isAlive())
        {
            chooseNewLeader();
        }

        Character *victim = findClosestLivingCharacter(leader_, enemyTeam->fighters_);
        while (victim)
        {
            for (Character *fighter : fighters_)
            {
                if (fighter->isAlive())
                {
                    Cowboy *cowboy = dynamic_cast<Cowboy *>(fighter);
                    if (cowboy && cowboy->hasBullets())
                    {
                        cowboy->shoot(victim);
                    }
                    else if (cowboy)
                    {
                        cowboy->reload();
                    }

                    Ninja *ninja = dynamic_cast<Ninja *>(fighter);
                    if (ninja && ninja->getLocation().distance(victim->getLocation()) <= 1.0)
                    {
                        ninja->slash(victim);
                    }
                    else if (ninja)
                    {
                        ninja->move(victim);
                    }
                }
            }

            if (!victim->isAlive())
            {
                victim = findClosestLivingCharacter(leader_, enemyTeam->fighters_);
            }
            else
            {
                break;
            }
        }
    }

    int Team::stillAlive() const
    {
        int count = 0;
        for (Character *fighter : fighters_)
        {
            if (fighter->isAlive())
            {
                count++;
            }
        }
        return count;
    }

    void Team::print() const
    {
        for (Character *fighter : fighters_)
        {
            fighter->print();
        }
    }

    Team::~Team()
    {
        for (Character *fighter : fighters_)
        {
            delete fighter;
        }
    }
}