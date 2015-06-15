#include "stdafx.h"

#include "ElementoPersona.h"

ElementoPersona::ElementoPersona(Persona & p) {
	this->p = p;
}

ElementoPersona::~ElementoPersona() {

}

int ElementoPersona::compareTo(Elemento* otro) {
	int cmp = 0;
	ElementoPersona * ePer = static_cast<ElementoPersona*>(otro);
	if (ePer != 0) {
		if (this->p.getID() < ePer->p.getID()) {
			cmp = -1;
		}
		else if (this->p.getID() == ePer->p.getID()) {
			cmp = 0;
		}
		else {
			cmp = 1;
		}
	}
	return cmp;
}

void ElementoPersona::imprimir(ostream& out) const {
	out << &p;
}