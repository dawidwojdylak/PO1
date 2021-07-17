#pragma once
#include <vector>
#include <iostream>

// interfejs
class Obserwator
{
public:
  // metoda wirtualna, wyzwala dzialanie Obserwatora z poziomu wskaźnika na interfejs
  virtual void wykonaj(int x) = 0;
};

// Klasa zliczająca argumenty obiektów klasy Obserwowany
class ObserwatorLicznik : public Obserwator
{
public:
  // konstruktor, wyzerowuje _sumę
  ObserwatorLicznik() : _suma(0) {}
  void wykonaj(int x) override { _suma += x; }
  // getter zwraca wartość _sumy
  int suma() const { return _suma; }
private:
  int _suma;
};

// Klasa wypisująca argumenty obiektów klasy Obserwowany
class ObserwatorWypisywacz : public Obserwator
{
public:
  void wykonaj(int x) override { std::cout << " " << x; }
};