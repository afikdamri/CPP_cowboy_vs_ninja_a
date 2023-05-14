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
        Cowboy(const std::string &name, const Point &location);
        void shoot(Character *enemy);
        bool hasBullets() const;
        void reload();
        void print() const override;
    };
}

#endif
