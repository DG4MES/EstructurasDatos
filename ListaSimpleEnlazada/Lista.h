#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <cstdlib>
#include "Nodo.h"

using namespace std;

class Lista
{
	public:
		Nodo *I, *T, *F, *T2, *A;
		Lista();
		void AgregarRandom();
		void Presentar();
		void Mayor();
		void Menor();
		void Buscar(int);
		void Modificar(int);
		void Eliminar();

	protected:
};

#endif
