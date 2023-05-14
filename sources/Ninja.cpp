#include "Ninja.hpp"
namespace ariel
{
    Ninja::Ninja(const std::string &name, const Point &location, int hitPoints, int speed)
        : Character(name, location, hitPoints), speed_(speed) {}

    void Ninja::move(const Character *enemy)
    {
        double distance = location_.distance(enemy->getLocation());
        if (distance > speed_)
        {
            double ratio = speed_ / distance;
            double dx = enemy->getLocation().getX() - location_.getX();
            double dy = enemy->getLocation().getY() - location_.getY();
            double newX = location_.getX() + dx * ratio;
            double newY = location_.getY() + dy * ratio;
            location_ = Point(newX, newY);
        }
    }

    void Ninja::slash(Character *enemy)
    {
        double distance = location_.distance(enemy->getLocation());
        if (isAlive() && distance < 1.0)
        {
            enemy->hit(40);
        }
    }
}