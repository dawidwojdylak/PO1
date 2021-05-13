#pragma once
#include "Rozniczka.h"

// klasa skladajaca dwie funkcje
class FZlozona : public Op1
{
public:
// konstruktor domyslny
    FZlozona(Fun *f) : _g(f) {}
    //metoda zwracajaca koncowa wartosc dwoch funkcji
    // moze byc przedrostek virtual, ale nie musi
    double w(double x) const 
    {
        return ( _g -> wartosc( _f -> wartosc(x) ) );
    }

private:
    // wskaznik na zewnetrzna funkcje
    Fun * _g;
};

