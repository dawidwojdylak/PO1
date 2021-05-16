#pragma once
#include "Argumenty.h"


class Algo
{
public:
	// wykonuje algorytm na argumentach klasy Argumenty
	virtual Argumenty wykonaj(const Argumenty &arg) const = 0;
	// kopiuje obiekt algorytmu
	virtual Algo* sklonuj() const = 0;
};


