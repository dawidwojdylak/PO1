#pragma once
#include <vector>
#include <functional>
#include "Argumenty.h"

class SekwencjaAlgorytmow
{
public:
    void add(const std::function<Argumenty(Argumenty const &)> fun)
    {
        _vec.push_back(fun);
    }
    Argumenty procesuj(const Argumenty & arg) const
    {
        Argumenty output(arg);
        for (auto & i : _vec)
            output = i(arg);
        return output;
    }

private:
    std::vector<std::function<Argumenty(Argumenty const &)>> _vec;
};