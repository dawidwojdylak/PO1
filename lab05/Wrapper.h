#pragma once
#include <iostream>
#include <cstring>

class Wrapper
{
public:
    virtual ~Wrapper() = default;
    virtual void print() const = 0;
    virtual Wrapper * copy() const = 0;

};
