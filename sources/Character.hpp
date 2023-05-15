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

        bool isAlive() const
        {return false;}

        double distance(const Character *other) const
        {return 0.0;}

        void hit(int amount){}

        std::string getName() const
        {return "";}

        Point getLocation() const
        {return Point(0.0, 0.0);}

        int getHitPoints() const{return -1;}

        void print() const{}

        virtual ~Character() {}
    };
}
#endif
