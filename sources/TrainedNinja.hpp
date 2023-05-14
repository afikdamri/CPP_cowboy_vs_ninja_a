#ifndef TRAINED_NINJA_HPP
#define TRAINED_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(const std::string &name, const Point &location);
        void print() const override;

        ~TrainedNinja() override;
        TrainedNinja(const TrainedNinja &) = default;
        TrainedNinja &operator=(const TrainedNinja &) = default;
        TrainedNinja(TrainedNinja &&) = default;
        TrainedNinja &operator=(TrainedNinja &&) = default;
    };
}

#endif
