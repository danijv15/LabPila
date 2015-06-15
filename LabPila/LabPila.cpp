// LabPila.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoIntInt.h"
#include "ElementoPersona.h"
#include "Lista.h"
#include "Pila.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Pila i;
	i.Push(new ElementoInt(9));
	i.Push(new ElementoInt(2));
	i.Push(new ElementoInt(10));
	cout << "Pila de Int:" << endl;
	cout << i << endl;
	cout << "Probamos Push:" << endl;
	i.Push(new ElementoInt(18));
	cout << i << endl;
	cout << "Probamos Peek, el primer elemento de la Pila es:" << endl;
	Elemento * x = i.Peek();
	cout << x << endl;
	cout << "Probamos Pop:" << endl;
	i.Pop();
	cout << i << endl;

	Pila ii;
	ii.Push(new ElementoIntInt(8, 12));
	ii.Push(new ElementoIntInt(5, 6));
	ii.Push(new ElementoIntInt(10, 1));
	cout << "Pila de IntInt:" << endl;
	cout << ii << endl;
	cout << "Probamos Push:" << endl;
	ii.Push(new ElementoIntInt(7, 4));
	cout << ii << endl;
	cout << "Probamos Peek, el primer elemento de la Pila es:" << endl;
	Elemento * y = ii.Peek();
	cout << y << endl;
	cout << "Probamos Pop:" << endl;
	ii.Pop();
	cout << ii << endl;

	Pila d;
	d.Push(new ElementoDouble(7.9));
	d.Push(new ElementoDouble(9.0));
	d.Push(new ElementoDouble(1.3));
	cout << "Pila de Double:" << endl;
	cout << d << endl;
	cout << "Probamos Push:" << endl;
	d.Push(new ElementoDouble(7.1));
	cout << d << endl;
	cout << "Probamos Peek, el primer elemento de la Pila es:" << endl;
	Elemento * i = d.Peek();
	cout << i << endl;
	cout << "Probamos Pop:" << endl;
	d.Pop();
	cout << d << endl;

	Pila p;
	Persona p1(65, "Daisy");
	Persona p2(43, "Mynor");
	Persona p3(12, "Esteban");
	p.Push(new ElementoPersona(p1));
	p.Push(new ElementoPersona(p3));
	cout << "Pila de Personas:" << endl;
	cout << p << endl;
	cout << "Probamos Push:" << endl;
	p.Push(new ElementoPersona(p2));
	cout << p << endl;
	cout << "Probamos Peek, el primer elemento de la Pila es:" << endl;
	Elemento * j = p.Peek();
	cout << j << endl;
	cout << "Probamos Pop:" << endl;
	p.Pop();
	cout << p << endl;
	
	return 0;
}

