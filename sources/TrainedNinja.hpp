#ifndef TRAINED_NINJA_HPP
#define TRAINED_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(const std::string &name, const Point &location): Ninja(name, location, 100, 10){};
        std::string print() const{return "";};
    };
}

#endif
