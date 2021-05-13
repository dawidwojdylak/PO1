#pragma once
#include "Fun.h" 
#include <math.h>

class Sinus : public Fun
{
public:
  // konstruktor domyślny
  Sinus(double x = 0) : _x(x) {}
  // funkcja (virtual) z klasy nadrzędnej
  double wartosc(double v) const { return sin (v); }

private:
  double _x;
};