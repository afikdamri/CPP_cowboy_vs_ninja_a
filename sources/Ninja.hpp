#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed_;

    public:
        Ninja(const std::string &name, const Point &location, int hitPoints, int speed)
            : Character(name, location, hitPoints), speed_(speed){}

        void move(const Character *enemy){}
        void slash(Character *enemy){}
    };
}

#endif
