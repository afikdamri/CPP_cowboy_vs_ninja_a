#include "Character.hpp"
using namespace std;

namespace ariel
{
    Character::Character(const string &name, const Point &location, int hitPoints)
        : name_(name), hitPoints_(hitPoints), location_(location) {}

    bool Character::isAlive() const
    {
        return hitPoints_ > 0;
    }

    double Character::distance(const Character *otherCharacter) const
    {
        return location_.distance(otherCharacter->location_);
    }

    void Character::hit(int amount)
    {
        hitPoints_ -= amount;
    }

    std::string Character::getName() const
    {
        return name_;
    }

    Point Character::getLocation() const
    {
        return location_;
    }

    void Character::print() const
    {
        std::cout << "Name: " << name_ << std::endl;
        if (isAlive())
        {
            std::cout << "Hit Points: " << hitPoints_ << std::endl;
            std::cout << "Location: (" << location_.getX() << ", " << location_.getY() << ")" << std::endl;
        }
        else
        {
            std::cout << "Character is dead." << std::endl;
            std::cout << "Location: (" << location_.getX() << ", " << location_.getY() << ")" << std::endl;
        }
    }
}