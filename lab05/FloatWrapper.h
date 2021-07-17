#pragma once 
#include "Wrapper.h"

class FloatWrapper : public Wrapper
{
public:
    FloatWrapper(float val) : _val(val) {}
    void print() const override { std::cout << _val << " "; }
    Wrapper * copy() const override { return new FloatWrapper(_val); }

private:
    float _val;
};

