#pragma once
#include "Obserwator.h"

// Klasa "obslugujaca" obserwatorow
class Obserwowany
{
public:
  // metoda przesylajaca informacje (argument) do obiektow klasy Obserwator
  void noweDaneNadeszly(int x) 
  {
    for (auto i : _obserwatorzy)
      i -> wykonaj(x);
  }
  // metoda dokladajaca wskaznik na obiekt klasy Obserwator do konteneru 
  void dodajObserwatora(Obserwator *obs) 
  {
    _obserwatorzy.push_back(obs);
  }

private:
  // kontener na wskazniki obiektow klasy Obserwator
  std::vector<Obserwator*> _obserwatorzy;
};

