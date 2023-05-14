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
        Character(const std::string &name, const Point &location, int hitPoints);
        bool isAlive() const;
        double distance(const Character *other) const;
        void hit(int amount);
        std::string getName() const;
        Point getLocation() const;
        int getHitPoints() const;
        virtual void print() const;

        virtual ~Character() = default;
        Character(const Character &) = default;
        Character &operator=(const Character &) = default;
        Character(Character &&) = default;
        Character &operator=(Character &&) = default;
    };
}
#endif