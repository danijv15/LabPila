#include "stdafx.h"

#include "Pila.h"
#include "Elemento.h"
#include "Lista.h"

Pila::Pila() {
	this->inicio = NULL;
}

Pila::Pila(Elemento * e) {
	this->insertarInicio(e);
}

Pila::~Pila() {

}

void Pila::Push(Elemento* e) {
	this->insertarInicio(e);
}

Elemento * Pila::Peek() {
	return this->inicio;
}

Elemento * Pila::Peek() {
	Elemento * temp = this->inicio;
	this->eliminarInicio();
	return temp;
}

ostream & operator<<(ostream & out, Pila & p) {
	p.imprimir(out);
	return out;
}