
#include "stdafx.h"
#include "Lista.h"

Lista::Lista() {
	inicio = NULL;
	final = NULL;
}

Lista::~Lista() {
	if (inicio == NULL) {
		delete inicio;
	}
	if (final == NULL) {
		delete inicio;
	}
}

void Lista::insertarInicio(Elemento * elemento) {
	if (inicio == NULL) {
		this->inicio = elemento;
		this->final = elemento;
	}
	else {
		Elemento* temp = elemento;
		temp->siguiente = this->inicio;
		this->inicio = temp;
	}
}

void Lista::insertarFinal(Elemento * elemento) {
	if (final == NULL) {
		this->inicio = elemento;
		this->final = elemento;
	}
	else {
		Elemento* temp = elemento;
		this->final->siguiente = temp;
		this->final = temp;
	}
}

void Lista::insertarElemento(Elemento * elemento, int posicion) {
	Elemento* temp1 = this->inicio;
	while (--posicion != 0) {
		temp1 = temp1->siguiente;
	}
	Elemento* temp2 = temp1->siguiente;
	Elemento* temp = elemento;
	temp1->siguiente = temp;
	temp->siguiente = temp2;
}

void Lista::eliminarInicio() {
	Elemento* temp = this->inicio;
	this->inicio = this->inicio->siguiente;
	delete temp;
}

void Lista::eliminarFinal() {
	Elemento* previo = this->inicio;
	Elemento* temp = this->inicio->siguiente;
	while (temp->siguiente != NULL) {
		temp = temp->siguiente;
		previo = previo->siguiente;
	}
	previo->siguiente = NULL;
	delete temp;
	this->final = previo;
}

void Lista::eliminarElemento(int posicion) {
	Elemento* cur = this->inicio;
	while (--posicion != 0) {
		cur = cur->siguiente;
	}
	Elemento* aEliminar = cur->siguiente;
	cur->siguiente = cur->siguiente->siguiente;
	delete aEliminar;
}

ostream & operator<<(ostream & out, Lista & l) {
	l.imprimir(out);
	return out;
}

void Lista::imprimir(ostream& out) {
	Elemento* aImprimir = this->inicio;
	while (aImprimir != NULL) {
		out << aImprimir;
			aImprimir = aImprimir->siguiente;
	}
}

