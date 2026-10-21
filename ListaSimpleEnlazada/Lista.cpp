#include "Lista.h"


Lista::Lista()
{
	I = NULL;
	T = NULL;
	F = NULL;
	T2 = NULL;
	A = NULL;
}


void Lista::Eliminar(){
  if(T == I){
      I = I->sig;
  } else if(F == T) {
     A->sig = NULL;
     F = A;
  } else {
     A->sig = T->sig;
  }

}



void Lista::Modificar(int num){
	Buscar(num);

    if(T != NULL){
        int nuevoValor;
        cout << "Ingrese el nuevo valor: ";
        cin >> nuevoValor;
        T->id = nuevoValor;
    }
}



void Lista::Buscar(int num){
    bool encontrado = false;
    T = I;
    A == I;
    while(T != NULL && !encontrado){
        if(T->id == num){
            encontrado = true;
            cout << "Numero encontrado en la lista." << endl;
        } else {
            A = T;
            T = T->sig;
        }
    }
    if(!encontrado){
        cout << "Numero no encontrado." << endl;
    }
}


void Lista::Mayor(){
    if (I == NULL) {
        cout << "La lista esta vacia." << endl;
        return;
    }
    T2 = I;
    T = I;
    while(T != NULL){
        if(T->id > T2->id){
            T2 = T;
        }
        T = T->sig;
    }
    cout << "El numero mayor es: " << T2->id << endl;
}

void Lista::Menor(){
    if (I == NULL) {
        cout << "La lista esta vacia." << endl;
        return;
    }
    T2 = I;
    T = I;
    while(T != NULL){
        if(T->id < T2->id){
            T2 = T;
        }
        T = T->sig;
    }
    cout << "El numero menor es: " << T2->id << endl;
}

void Lista::Presentar() {
    T = I;
    while(T != NULL){
        cout << "ID: " << T->id << endl;
        T = T->sig;
    }
}





