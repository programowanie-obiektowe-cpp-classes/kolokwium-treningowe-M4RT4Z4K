#include "catch.hpp"

class Makaron
{
public:
    virtual ~Makaron()                      = default;
    virtual double  ileMaki(unsigned) const = 0;
    static Makaron* gotujMakaron(const std::string& s);
};

class Tagliatelle : public Makaron
{
    double              L, W, R;
    static const double C;

public:
    Tagliatelle() : L{.5}, W{.5}, R{.5} {}
    Tagliatelle(double a, double b, double c) : L{a}, W{b}, R{c} {}
    double ileMaki(unsigned P) const { return static_cast< double >(P) * L * W * (1. - R) * C; }
};
