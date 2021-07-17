#pragma once
#include "Wrapper.h"
#include <cstring>

class StringWrapper : public Wrapper
{
public:
    StringWrapper(const char * val)
    {
        _val = new char[strlen(val) + 1];
        strcpy(_val, val);
    }
    ~StringWrapper()
    {
        delete [] _val;
    }

    void print() const override
    {
        std::cout << _val << " ";
    }
    Wrapper * copy() const override { return new StringWrapper(_val); }

private:
    char * _val;
};
