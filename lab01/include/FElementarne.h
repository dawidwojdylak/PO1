#pragma once
#include "Fun.h"

class Liniowa : public Fun 
{
public:
  Liniowa(double m = 0, double n = 0) : _a(m), _b(n) {}
  
  // Metody ustawiające współczynniki funkcji liniowej.
  // Zwracają wskaźnik do obiektu, na którym pracują.
  // Możliwe użycie: Fun * l = Liniowa::utworz()->a(1.)->b(0.);
  Liniowa * a(double n) { _a = n; return this; }
  Liniowa * b(double n) { _b = n; return this; }
  // Metoda tworzaca pusty obiekt
  static Liniowa * utworz() { return new Liniowa(); }
  // Metoda zwracajaca wartosc funkcji liniowej w punkcie x
  double wartosc(double x) const override { return (_a * x + _b);}
private:
  // wspolczynniki y = _a * x + _b
  double _a, _b;
};

// Klasa Kwadratowa analogicznie do liniowej
class Kwadratowa : public Fun 
{
public:
  Kwadratowa(double m = 0, double n = 0, double l = 0)
  : _a(m), _b(n), _c(l) {}
  static Kwadratowa * utworz() { return new Kwadratowa; }
  
  Kwadratowa * a(double v) { _a = v; return this; }
  Kwadratowa * b(double v) { _b = v; return this; }
  Kwadratowa * c(double v) { _c = v; return this; }
  
  double wartosc(double x) const { return _a * x * x + _b * x + _c; }
  // y = _a * x^2 + _b * x + _c
private:
  double _a, _b, _c;
};