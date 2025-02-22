#ifndef YOUNG_NINJA_HPP
#define YOUNG_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class YoungNinja : public Ninja
    {
    private:
        static constexpr int DEFAULT_SPPED = 14; 
        static constexpr int DEFAULT_DAMAGE = 100; 
    public:
        YoungNinja(const std::string &name, const Point &location)
            : Ninja(name, DEFAULT_DAMAGE, location, DEFAULT_SPPED){};
        std::string static print(){return "";};
    };
}
#endif
