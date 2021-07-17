#pragma once
#include <iostream>
#include "Wrapper.h"

class PArr
{
public:
    PArr(size_t size);
    ~PArr();
    Wrapper *& operator[](int i) { return _arr[i]; }
    const Wrapper * operator[](int i) const { return _arr[i]; }
    const size_t size() const { return _size; }
    PArr & operator=(PArr & other);

private:
    size_t _size;
    Wrapper ** _arr;
};

std::ostream & operator<<(std::ostream & str, const PArr & arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
        if (arr[i])
            arr[i] -> print();
    return str;
}

PArr::PArr(size_t size) : _size(size) 
{
    _arr = new Wrapper* [size];
    for (size_t i = 0; i < _size; ++i)
        _arr[i] = nullptr;
}
PArr::~PArr()
{
    for (size_t i = 0; i < _size; ++i)
        if(_arr[i])
            delete _arr[i];
    delete [] _arr;
}

PArr & PArr::operator=(PArr & other)
{
    if (other._arr == this -> _arr)
        return *this;
    
    for (size_t i = 0; i < other.size(); i++)
        if(other[i])
            delete other[i];
    delete [] other._arr;

    other._arr = new Wrapper *[_size];
    for (size_t i = 0; i < _size; i++)
        other._arr[i] = _arr[i] -> copy();
    return *this;

}