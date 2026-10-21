#ifndef ESTUDIANTE1_H
#define ESTUDIANTE1_H
#include <iostream>
#include <string>
using namespace std;

class Estudiante1
{
	public:
		Estudiante1();
		int Codigo;
		string Nombre;
		double N1;
		double N2;
		Estudiante1 *sig;
		double Promedio();
		
	protected:
};

#endif
