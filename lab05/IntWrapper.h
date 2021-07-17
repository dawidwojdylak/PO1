#pragma once
#include "Wrapper.h"

class IntWrapper : public Wrapper
{
public:
    IntWrapper(int val) : _val(val) {}
    void print() const override { std::cout << _val << " "; } 
    Wrapper * copy() const override { return new IntWrapper(_val); }

private:
    int _val;
};