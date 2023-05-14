#include "YoungNinja.hpp"
using namespace std;
namespace ariel
{
    YoungNinja::YoungNinja(const string &name, const Point &location)
        : Ninja(name, location, 100, 14) {}

    void YoungNinja::print() const
    {
        cout << "Character: N (Young Ninja), Name: " << name_ << ", Hit Points: " << hitPoints_ << ", Location: ";
        location_.print();
    }
}