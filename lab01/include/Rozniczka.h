#pragma once
#include "Op.h"

// klasa liczaca rozniczke (wartosc rozniczki w punkcie)
class ProstaRozniczka : public Op1
{
public:
    // konstruktor domyslny; ustawia precyzje liczenia
    ProstaRozniczka(double prec = 0.01) 
    : _h(prec) {}

    // zwraca wartosc rozniczki funkcji w punkcie
    double w(double x) const
    {
        // f' = (f(x + h) - f(x - h)) / 2h
        return ( ( _f -> wartosc( x + _h ) - _f -> wartosc( x - _h ) ) / (2*_h) );
    }

private:
    double _h; //precyzja    
};