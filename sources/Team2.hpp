#ifndef TEAM22_HPP
#define TEAM22_HPP

#include <vector>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"

namespace ariel
{
    class Team2
    {
    private:
         static const int MAX_FIGHTERS = 10;
        std::vector<Character *> fighters_;
        Character *leader_;

        Character static *findCharacter(const Character *character, const std::vector<Character *> &characters)
        {return nullptr;}

        void chooseNewLeader(){}

    public:
        Team2(Character *leader) : leader_(leader){}

        void add(Character *fighter){}
        void attack(Team2 *enemyTeam2){}
        void print() const{}
        int static stillAlive(){return 0;}

        ~Team2(){};
        Team2(const Team2&) = delete; // Delete copy constructor
        Team2& operator=(const Team2&) = delete; // Delete copy assignment operator
        Team2(Team2&&) = delete; // Delete move constructor
        Team2& operator=(Team2&&) = delete; // Delete move assignment operator
    };
}

#endif