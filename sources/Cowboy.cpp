#include "Cowboy.hpp"

namespace ariel
{
    Cowboy::Cowboy(const std::string &name, const Point &location)
        : Character(name, location, 110), bullets_(6) {}

    void Cowboy::shoot(Character *enemy)
    {
        if (isAlive() && bullets_ > 0)
        {
            enemy->hit(10);
            bullets_--;
        }
    }

    bool Cowboy::hasBullets() const
    {
        return bullets_ > 0;
    }

    void Cowboy::reload()
    {
        bullets_ = 6;
    }

    void Cowboy::print() const
    {
        std::cout << "Character: C (Cowboy), Name: " << name_ << ", Hit Points: " << hitPoints_ << ", Location: ";
        location_.print();
    }
}