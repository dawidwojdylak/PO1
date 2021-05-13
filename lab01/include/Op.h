#pragma once
#include "Fun.h"

// interfejs ProstejRozniczki i FZlozonej
class Op1
{
public:
    // jest to metoda, z ktorej korzystaja klasy podrzedne
    // jej wykonanie to np. 
    // main.cpp:pochodna->z(l)->w(1) lub
    // main.cpp: zloz->z(l)->w(3.0)
    virtual Op1 * z(Fun* f) { _f = f; return this; }
    // zwraca wartosc pochodnej w punkcie x
    virtual double w(double x) const = 0;

protected:
    // Wskaznik do funkcji elementarnej z interfejsu Fun.h
    Fun * _f;
};