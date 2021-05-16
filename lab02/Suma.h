#pragma once
#include "Algo.h"

class Suma : public Algo
{
public:
  Argumenty wykonaj(const Argumenty &arg) const override
  {
    Argumenty output(1);
    double sum = 0;
    for (int i = 0; i < arg.rozmiar(); ++i)
      sum += arg[i];
    output(0, sum);
    return output;
  }

  Suma* sklonuj() const override
  {
    return new Suma;
  }

};
















// stare
// class Suma : public Algo
// {
// public: 
//   // sumuje argumenty, zwraca tablicę z sumą
//   Argumenty wykonaj(const Argumenty &b ) const
//   {
//     double sum = 0;
//     for (int i = 0; i < b.rozmiar(); i++)
//       sum += b[i];
//     //return *this;
//   }

//   Suma * sklonuj() const {return new Suma;}

// private:
//   double _sum;
// };
