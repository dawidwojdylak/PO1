#include "Argumenty.h"

Argumenty::Argumenty(std::initializer_list<std::initializer_list<double>> l )
{
  _n = l.size();
  _arr = new double[l.size()];
  double temp[2];
  for(auto m : l)
  {
    int i = 0;
    for(auto n : m)
    {
      temp[i] = n;
      i++;
    } 
    (*this)(temp[0], temp[1]);
  }
}

Argumenty::Argumenty(const int n) : _n(n) 
{ 
   _arr = new double[n];
}

Argumenty::~Argumenty()
{
  delete [] _arr;
}

Argumenty& Argumenty::operator()(int i, double val)
{
  _arr[i] = val;
  return *this;
}

void Argumenty::print (const char * txt, std::ostream& stream) const
{
  stream << txt << " ";
  for (int i = 0; i < _n; ++i)
    stream << _arr[i] << " ";
  stream << "\n";   
}

int Argumenty::rozmiar() const { return _n; }