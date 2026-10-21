#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
using namespace std;
class lista
{
	public:
		lista();
nodo *I,*T,*F,*T2,*A;
void agregar(int);
void presentar();
void minimo();
void maximo();
void buscar(int);
void agregarA();
void eliminar();
	protected:
};

#endif
