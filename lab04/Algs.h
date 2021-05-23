#pragma once
#include "Argumenty.h"
#include <math.h>

Argumenty minimum(const Argumenty & arg)
{
    Argumenty output(1);
    double min = arg[0];
    for(int i = 0; i < arg.rozmiar(); ++i)
        if (arg[i] < min)
            min = arg[i];
    return output(0, min);
}

Argumenty sum(const Argumenty & arg)
{
    Argumenty output(1);
    double sum = 0;
    for (int i = 0; i < arg.rozmiar(); ++i)
        sum += arg[i];
    return output(0, sum);
}

Argumenty sq(const Argumenty & arg)
{
    return Argumenty(1)(0, sqrt(arg[0]));
}