#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"
// #include "TrainedNinja.hpp"
// #include "YoungNinja.hpp"
// #include "OldNinja.hpp"


namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed_;

    public:
        Ninja(const std::string &name, const Point &location, int hitPoints, int speed);
        void move(const Character *enemy);
        void slash(Character *enemy);
    };
}
#endif