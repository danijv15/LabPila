#pragma once
#include <string>

using namespace std;

class Persona{

private:
	int id;
	string nombre;

public:
	Persona();
	Persona(int, string);
	virtual  ~Persona();
	int getID();
	void setID(int);
	string getNombre();
	void setNombre(string);
};