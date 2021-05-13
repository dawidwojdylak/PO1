#pragma once 

// interfejs funkcji
class Fun{
public:
  // zwraca wartość funkcji
  virtual double wartosc(double x) const = 0;
  // wygodne użycie f(x)
  virtual double operator()(double x) { return wartosc(x); }
};