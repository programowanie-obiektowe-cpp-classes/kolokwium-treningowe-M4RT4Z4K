#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <iterator>
#include <random>
#include <vector>

template < typename Iterator >
void sortujTagliatelle(Iterator begin, Iterator end)
{
    std::sort(begin, end, [](const Tagliatelle& t1, const Tagliatelle& t2) {
        return t1.ileMaki(1) > t2.ileMaki(1);
    });
}
