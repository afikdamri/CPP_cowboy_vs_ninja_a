#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class OldNinja : public Ninja
    {
    public:
        OldNinja(const std::string &name, const Point &location)
            : Ninja(name, location, 100, 10){}

        std::string print() const
        {return "";}
    };
}

#endif
