#pragma once
#include <iostream>
#include <vector>

class Algo;

class Argumenty
{
public:
  // konstruktor umozliwiajacy tworzenie obiektor lista inicjalizacyjna
  // Argumenty a{{0, 2.5}, {1,4},..itd..};
  // pierwszy element to indeks tablicy, drugi to wartość argumentu.
  // Konstruktor nie sprawdza poprawności wprowadzanych danych.
  Argumenty(std::initializer_list<std::initializer_list<double>> l );
   // konstruktor przyjmujący liczbę elementów
  Argumenty(const int n);
  // ~Argumenty();

  // operator funkcyjny, pierwszy argument to indeks, do ktorego chcemy zapisac wartosc
  // drugi argument to wartosc. Dzieki temu inicjalizujemy w taki sposob
  // a( 0, 2.5 )( 1, 4 )( 3, 8 )( 2, 9 );
  Argumenty& operator()(int i, double val);

  void print (const char * txt, std::ostream& stream = std::cout) const;
  // metoda zwracająca liczbę argumentów
  int rozmiar() const;
  // przeciążenie operatora [], korzystamy z klasy jak ze zwykłej tablicy
  double& operator[](int i) { return _arr[i]; }
  const double& operator[](int i) const { return _arr[i]; }

  static Argumenty pojedynczy(double n) { return Argumenty(1)(0, n); }

private:
  int _n; // rozmiar tablicy argumentow
  // double * _arr; // tablica przechowujaca argumenty
  std::vector<double> _arr; // tablica przechowujaca argumenty
};

std::ostream& operator<<(std::ostream& str, const Argumenty & arg);