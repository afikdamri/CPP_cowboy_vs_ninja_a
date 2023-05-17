#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Point.hpp"

namespace ariel
{
    class Character
    {
    private:
        std::string name_;
        int hitPoints_;
        Point location_;

    public:
        Character(const std::string &name, const Point &location, int hitPoints)
            : name_(name), hitPoints_(hitPoints), location_(location){}

        bool static isAlive()
        {return false;}

        double static distance(const Character *other)
        {return 0.0;}

        void hit(int amount){}

        std::string static getName()
        {return "";}

        Point static getLocation()
        {return Point(0.0, 0.0);}

        int static getHitPoints(){return -1;}

        void print() const{}

        ~Character(){}

        Character(const Character&) = delete; // Delete copy constructor
        Character& operator=(const Character&) = delete; // Delete copy assignment operator
        Character(Character&&) = delete; // Delete move constructor
        Character& operator=(Character&&) = delete; // Delete move assignment operator
    };
}
#endif
