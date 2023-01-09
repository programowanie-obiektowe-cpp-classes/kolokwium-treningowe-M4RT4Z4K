#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne : public Makaron
{
public:
    double ileMaki(unsigned P) const { return P; }
};
