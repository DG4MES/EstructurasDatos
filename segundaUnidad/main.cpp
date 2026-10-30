#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Nodo *I, *T, *F, *A;

using namespace std;

void agregar(int);
void presentarAdelante();
void presentarAtras();
void buscar(int);
void buscarL(int);
void eliminar();

int main(int argc, char** argv) {
    srand(time(NULL));
    int _x = 0;
    
    while(_x == 0){
        int opt;
        
        cout << "\n\n===== MENU =====" << endl;
        cout << "1) agregar "<< endl;
        cout << "2) presentar Adelante "<< endl;
        cout << "3) presentar Atras "<< endl;
        cout << "4) Buscar" << endl;
        cout << "5) Eliminar" <<endl;
        cout << "0) Salir" << endl; 
        cout << "Escoja una opcion: ";
        cin >> opt;
        
        switch(opt){
            case 1: {
                int limite = rand() % 10 + 1; 
                for(int i = 0; i < limite; i++){
                    agregar(rand() % 10);
                }
                cout << limite << " nodos agregados con exito!" << endl;
                break;
            }
            
            case 2:
                presentarAdelante();
                break;
                
            case 3:
                presentarAtras();
                break;
                
            case 4: {
            	int num;
            	cout << "Por favor ingrese el numero: ";
            	cin >> num;
            	buscarL(num);
				break;
			}
			
			case 5: {
				int num;
            	cout << "Por favor ingrese el numero: ";
            	cin >> num;
            	buscarL(num);
            	eliminar();
				break;
			}
                
            case 0:
                _x = 1; 
                break;
        }
    }
    return 0;
}

void presentarAdelante(){
    T = I;
    while(T != NULL){
        cout << "ID: " << T->id << endl;
        T = T->sig;
    }
}

void presentarAtras(){
    T = F;
    while(T != NULL){
        cout << "ID: " << T->id << endl;
        T = T->ant;
    }
}

void agregar(int ID){
    T = new Nodo();
    T->sig = NULL;
    T->ant = NULL;
    T->id = ID;

    if(I == NULL){
        I = T;
    } else {
        F->sig = T;
        T->ant = F;
    }

    F = T;
}



//ESTA ES LA VERSION QUE HICE
void buscar(int ID){
	bool encontrado = false;
	if(ID <= 5){
		
		T = I;
		A = I;
		
		while(T != NULL && !encontrado){
			if(T->id == ID){
				encontrado = true;
				T = T->sig;
			} else {
				A = T;
				T = T->sig;
			}
		}
		if(!encontrado) {
			cout << "Numero no encontrado" << endl;
		} else {
			cout << "Numero encontrado!!" << endl;
		}
		
	} else {
		T = F;
		A = F;
		
		while(T != NULL && !encontrado){
			if(T->id == ID){
				encontrado = true;
				T = T->ant;
			} else {
				A = T;
				T = T->ant;
			}
		}
		if(!encontrado) {
			cout << "Numero no encontrado" << endl;
		} else {
			cout << "Numero encontrado!!" << endl;
		}
	}
}


//ESTA ES LA VERSION DEL LIC
void buscarL(int num){
	bool encontrado = false;
	if(num > F->id/2){
		T = F;
		while(T != NULL && !encontrado){
			cout << T->id << endl;
			if(T->id == num){
				encontrado = true;
				cout << "LO ENCONTRAMOS!, ID: " << T->id << endl; 
			} else {
				T = T->ant;
			}
		}
	} else {
		T = I;
		while(T != NULL && !encontrado){
			cout << T->id << endl;
			if(T->id == num){
				encontrado = true;
				cout << "LO ENCONTRAMOS!, ID: " << T->id << endl; 
			} else {
				T = T->sig;
			}
		}
	}
	
	if(!encontrado){
		cout << "Numero no encontrado" << endl;
	}
}

void eliminar(){
	if(T == I){
		T = T->sig;
	} else if(T == F){
		T = T->ant;
	} else {
		A = T;
		A = A->ant;
		T = A;
	}
}
