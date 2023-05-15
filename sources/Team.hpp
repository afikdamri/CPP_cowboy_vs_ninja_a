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

        Character *findCharacter(const Character *character, const std::vector<Character *> &characters) const
        {return nullptr;}

        void chooseNewLeader(){}

    public:
        Team(Character *leader) : leader_(leader){}

        void add(Character *fighter){}
        void attack(Team *enemyTeam){}
        void print() const{}
        int stillAlive() const{return 0;}
        ~Team(){}
    };
}
#endif
