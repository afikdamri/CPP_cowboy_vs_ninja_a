#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"

namespace ariel
{
    class Cowboy : public Character
    {
    private:
        int bullets_;

    public:
        Cowboy(const std::string &name, const Point &location)
            : Character(name, location, 0), bullets_(6){}
        void shoot(Character *enemy){}

        bool hasBullets() const
        {return false;}

        void reload(){}
        std::string print() const
        {return "";}
    };
}

#endif
