#include "catch.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <type_traits>

class Makaron {
public:
    virtual ~Makaron() = default;
    virtual double  ileMaki(unsigned P) const { return 0; }
    static Makaron* gotujMakaron(const std::string& S) {
        if (S.front() == S.back())
        {
            return new Tagliatelle(3.14, 0.42, 0.1);
        }
        else
        {
            return new Penne;
        }
    }
};

class Tagliatelle: public Makaron
{
public:
    Tagliatelle() : L{.5}, W{.5}, R{.5} {};
    Tagliatelle(double a, double b, double c) : L{a}, W{b}, R{c} {}
    double ileMaki(unsigned P) const { return (P * L * W * (1. - R) * C);}

private:
    double       L, W, R;
    static const double C;
};

class Penne : public Makaron
{
public:
    double ileMaki(unsigned P) const { return P; }
};
