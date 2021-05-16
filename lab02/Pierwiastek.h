#pragma once
#include "Algo.h"
#include <math.h>

class Pierwiastek : public Algo
{
public:
  Argumenty wykonaj(const Argumenty &arg) const override
  {
    Argumenty output(arg.rozmiar());
    for (int i = 0; i < arg.rozmiar(); ++i)
      output[i] = sqrt(arg[i]);
    return output;
  }
  
  // wariantnosc metod wirtualnych
  Pierwiastek* sklonuj() const override { return new Pierwiastek; }

private:

};













// stare

// class Pierwiastek : public Algo
// {
// public:
//     virtual Pierwiastek wykonaj (const Argumenty &a) 
//     {
//       _arr = new double[a._n];
//       _n = a._n;
//       for (int i = 0; i < a._n; i++)
//         _arr[i] = sqrt(a._arr[i]);
//       return *this;
//     }
//     virtual void print( const char * txt )
//     {
//       std::cout << txt << " ";
//       for (int i = 0; i < _n; i++)
//         std::cout << _arr[i] << " ";
//       std::cout << "\n";
//     }

// private:
//   double * _arr;
//   int _n;
// };