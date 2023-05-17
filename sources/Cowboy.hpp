#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"

namespace ariel
{
    class Cowboy : public Character
    {
    private:
        int bullets_;
        static constexpr int DEFAULT_BULLETS = 6;
    public:
        Cowboy(const std::string &name, const Point &location)
            : Character(name, location, 0), bullets_(DEFAULT_BULLETS){}
        void shoot(Character *enemy){}

        bool static hasBullets()
        {return false;}

        void reload(){}
        std::string static print()
        {return "";}
    };
}

#endif
