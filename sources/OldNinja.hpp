#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"

namespace ariel
{
    class OldNinja : public Ninja
    {
    public:
        OldNinja(const std::string &name, const Point &location);
        void print() const override;

        OldNinja() = default;
        OldNinja(const OldNinja &) = default;
        OldNinja &operator=(const OldNinja &) = default;
        OldNinja(OldNinja &&) = default;
        OldNinja &operator=(OldNinja &&) = default;
        ~OldNinja() override;
    };
}
#endif
