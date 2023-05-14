#include "Character.hpp"
using namespace std;

namespace ariel
{
    Character::Character(string charName, int initialHitPoints, Point charLocation)
        : name_(charName), hitPoints_(initialHitPoints), location_(charLocation) {}

    bool Character::isAlive()
    {
        return hitPoints_ > 0;
    }

    double Character::distance(Character *otherCharacter)
    {
        return location_.distance(otherCharacter->location_);
    }

    void Character::hit(int amount)
    {
        hitPoints_ -= amount;
    }

    string Character::getName()
    {
        return name_;
    }

    Point Character::getLocation()
    {
        return location_;
    }

    void Character::print()
    {
        cout << "Name: " << name_ << endl;
        if (isAlive())
        {
            cout << "Hit Points: " << hitPoints_ << endl;
            cout << "Location: (" << location_.getx() << ", " << location_.gety() << ")" << endl;
        }
        else
        {
            cout << "Character is dead." << endl;
            cout << "Location: (" << location_.getx() << ", " << location_.gety() << ")" << endl;
        }
    }
}