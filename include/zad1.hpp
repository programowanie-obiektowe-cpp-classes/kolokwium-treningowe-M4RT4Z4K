#include "catch.hpp"
#include <iostream>

class Makaron {
public:
    virtual ~Makaron(){};
    virtual double ileMaki(unsigned P) const { }
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
