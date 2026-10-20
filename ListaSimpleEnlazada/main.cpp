#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Nodo.h"

using namespace std;

void AgregarRandom();
void Presentar();
void Mayor();
void Menor();
void Buscar(int);
void Modificar(int);

Nodo *I, *T, *F, *T2;

int main(int argc, char** argv) {
    int _x = 0;
    while(_x == 0){
        int opt;

        cout << "\tMENU " << "\n\n";
        cout << "1) Agregar Aleatorios" << endl;
        cout << "2) Presentar" << endl;
        cout << "3) Mayor" << endl;
        cout << "4) Menor" << endl;
        cout << "5) Buscar" << endl;
        cout << "6) Modificar" << endl;
        cout << "0) Salir" << endl;
        cout << "escoja una opcion: ";
        cin >> opt;
		cout << "\n\n";
        switch(opt){
            case 1:
                AgregarRandom();
                break;
            case 2:
                Presentar();
                break;
            case 3:
                Mayor();
                break;
            case 4:
                Menor(); 
                break;
            case 5: {
                int num;
                cout << "Por favor ingrese el numero de busqueda: ";
                cin >> num;
                Buscar(num);
                break;
            }
            case 6: {
                int num;
                cout << "Por favor ingrese el numero a modificar: ";
                cin >> num;
                Modificar(num);
                break;
            }
            case 0:
                _x = 1;
                break;
        }
    }
    return 0;
}

void AgregarRandom(){
    srand(time(NULL));
   
    for(int i = 0; i < rand()%15; i++){
        T = new Nodo();
        T->sig = NULL;
        T->id = rand()%100;

        if(I == NULL){
            I = T;
        } else {
            F->sig = T;
        }

        F = T;
    }
}

void Presentar() {
    T = I;
    while(T != NULL){
        cout << "ID: " << T->id << endl;
        T = T->sig;
    }
}

void Menor(){
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

void Mayor(){
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

void Buscar(int num){
    bool encontrado = false;
    T = I;

    while(T != NULL && !encontrado){
        if(T->id == num){
            encontrado = true;
            cout << "Numero encontrado en la lista." << endl;
        } else {
            T = T->sig;
        }
    }
    if(!encontrado){
        cout << "Numero no encontrado." << endl;
    }
}

void Modificar(int num){
	Buscar(num);

    if(T != NULL){
        int nuevoValor;
        cout << "Ingrese el nuevo valor: ";
        cin >> nuevoValor;
        T->id = nuevoValor;
    }
}
