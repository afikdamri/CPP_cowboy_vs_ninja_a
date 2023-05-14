#ifndef TEAM_HPP
#define TEAM_HPP

#include <vector>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"

namespace ariel
{
    class Team
    {
    private:
        static const int MAX_FIGHTERS = 10;
        std::vector<Character *> fighters_;
        Character *leader_;

        Character *findClosestLivingCharacter(const Character *character, const std::vector<Character *> &characters) const;
        void chooseNewLeader();

    public:
        Team(Character *leader);
        void add(Character *fighter);
        void attack(Team *enemyTeam);
        int stillAlive() const;
        void print() const;
        
        ~Team() = default;
        Team(const Team &) = default;
        Team &operator=(const Team &) = default;
        Team(Team &&) = default;
        Team &operator=(Team &&) = default;
    };
}
#endif