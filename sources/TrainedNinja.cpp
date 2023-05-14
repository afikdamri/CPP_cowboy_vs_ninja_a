#include "TrainedNinja.hpp"

namespace ariel
{
    TrainedNinja::TrainedNinja(const std::string &name, const Point &location)
        : Ninja(name, location, 120, 12) {}

    void TrainedNinja::print() const
    {
        std::cout << "Character: N (Trained Ninja), Name: " << name_ << ", Hit Points: " << hitPoints_ << ", Location: ";
        location_.print();
    }
}