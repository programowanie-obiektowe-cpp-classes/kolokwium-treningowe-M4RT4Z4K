#include "zad1.hpp"
#include <cstdint>
#include <functional>

template < typename T >
std::size_t polejSosem(const Tagliatelle& t, const T& sos)
{
    return sos.polej(t);
}
