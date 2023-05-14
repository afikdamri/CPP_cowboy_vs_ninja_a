#include "OldNinja.hpp"
#include "Character.hpp"

namespace ariel
{
    OldNinja::OldNinja(const std::string &name, const Point &location)
        : Ninja(name, location, 150, 8) {}

    void OldNinja::print() const
    {
        std::cout << "Character: N (Old Ninja), Name: " << getName() << ", Hit Points: " << getHitPoints() << ", Location: ";
        getLocation();
    }
}
