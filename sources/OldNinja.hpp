#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class OldNinja : public Ninja
    {
    private:
        static constexpr int DEFAULT_SPPED = 8; 
        static constexpr int DEFAULT_DAMAGE = 150;
    public:
        OldNinja(const std::string &name, const Point &location)
            : Ninja(name, DEFAULT_DAMAGE, location, DEFAULT_SPPED){}

        std::string static print()
        {return "";}
    };
}

#endif
