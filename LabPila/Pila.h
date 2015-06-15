#pragma once 

#include "Elemento.h"
#include "Lista.h"
#include <iostream>

using namespace std;

class Pila : protected Lista {
	
	friend ostream & operator<<(ostream &, Pila &);

public:
	Pila();
	Pila(Elemento *);
	virtual ~Pila();
	void Push(Elemento *);
	Elemento * Peek();
	Elemento * Pop();
};

ostream & operator<<(ostream &, Pila &);