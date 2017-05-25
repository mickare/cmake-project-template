//
// Created by Konstantin Gredeskoul on 5/14/17.
//

#include "prjlib/prjlib.hpp"

int Divisible::modulo(const int number)
{
    if (denominator_== 0) throw DivisionByZero();
    return (number % denominator_);
}
