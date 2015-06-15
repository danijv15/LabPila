#pragma once

#include "Elemento.h"
#include <iostream>
using namespace std;

class Lista {

	friend ostream & operator<<(ostream &, Lista &);

protected:
	Elemento * inicio;
	Elemento * final;

public:
	Lista();
	virtual ~Lista();
	void insertarInicio(Elemento *);
	void insertarFinal(Elemento *);
	void insertarElemento(Elemento *, int);

	void eliminarInicio();
	void eliminarFinal();
	void eliminarElemento(int);
	
	void imprimir(ostream&);
};

ostream & operator<<(ostream &, Lista &);