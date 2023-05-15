#ifndef YOUNG_NINJA_HPP
#define YOUNG_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(const std::string &name, const Point &location): Ninja(name, location, 100, 10){};
        std::string print() const{return "";};
    };
}
#endif
