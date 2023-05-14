#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Point.hpp"

namespace ariel
{
    class Character
    {
    protected:
        std::string name_;
        int hitPoints_;
        Point location_;

    public:
        Character(std::string charName, int initialHitPoints, Point charLocation);
        bool isAlive();
        void print();
        double distance(Character *otherCharacter);
        void hit(int amount);
        std::string getName();
        Point getLocation();
        
    };
}
#endif // CHARACTER_HPP