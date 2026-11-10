#include <iostream>
#include "Nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

Nodo *I, *T;
void Agregar(Nodo *);
void Nuevo(int);
int Presentar(Nodo *);

int main(int argc, char** argv) {
	
	Nuevo(30);
	Nuevo(3);
	Nuevo(10);
	Nuevo(15);
	Nuevo(90);
	Nuevo(45);
	Nuevo(7);
	Nuevo(2);
	Presentar(I);
}


void Nuevo(int num){
	T = new Nodo();
	T->id = num;
	T->L = NULL;
	T->R = NULL;
	if(I == NULL){
		I = T;
	} else {
		Agregar(I);	
	}
}

void Agregar(Nodo *A){
	if(T->id > A->id){
		if(A->R == NULL){
			A->R = T;
		} else {
			Agregar(A->R);
		}
	} else {
			if(A->L == NULL){
			A->L = T;
		} else {
			Agregar(A->L);
		}
	}
}

int Presentar(Nodo *A){
	if (A == NULL){
		return 0;
	} else {
		cout << A->id << endl;
		Presentar(A->L);
		Presentar(A->R);
		return 0;
	}
}
