#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Nodo {
public:
    //Nodo();
    int id;
    Nodo* sig;
    Nodo* ant;
};

class Lista {
public:
    //Lista();
    int num;
    Nodo *I = NULL,
          *T = NULL,
           *F = NULL,
            *A = NULL;

    Lista *ant, *sig;

    void agregar(int num) {
        T = new Nodo();
        T->id = num;
        T->ant = NULL;
        T->sig = NULL;
        if(I == NULL) {
            I = T;
        } else {
            F->sig = T;
            T->ant = F;
        }
        F = T;
    }

    void imprimir() {
        T = I;
        while(T !=NULL) {
            cout << "  -> " << T->id <<endl;
            T = T->sig;
        }
    }

    void buscar(int num) {
        bool encontrado = false;
        if(num > F->id/2) {
            T = F;
            while(T != NULL && !encontrado) {
                
                if(T->id == num) {
                    encontrado = true;
                    cout << "encontrado, ID: " << T->id << endl;
                } else {
                    T = T->ant;
                }
            }
        } else {
            T = I;
            while(T != NULL && !encontrado) {
                
                if(T->id == num) {
                    encontrado = true;
                    cout << "encontrado, ID: " << T->id << endl;
                } else {
                    T = T->sig;
                }
            }
        }

        if(!encontrado) {
            cout << "Numero no encontrado" << endl;
        }
    }
};

class DobleLista {
public:
    Lista *I = NULL,
           *T = NULL,
            *F = NULL;

    DobleLista() {
        int cubeta = 0;
        while(cubeta < 10) {
            T = new Lista();
            T->num = cubeta;
            cubeta++;
            T->ant = NULL;
            T->sig = NULL;
            if(I == NULL) {
                I = T;
            } else {
                F->sig = T;
                T->ant = F;
            }
            F = T;

        }
    }

    void Imprimir() {
        T = I;
        while(T != NULL) {
            cout << "Lista num: " << T->num << endl;
            T->imprimir();
            T = T->sig;
        }
    }

    void Agregar(int num) {
        int cubeta = 0;
        T = I;
        while(cubeta < (num/10)) {
            T = T->sig;
            cubeta++;
        }
        T->agregar(num);
    }

    void Buscar(int num) {
        if((num/10) >  5){
            T = F;
            while((num/10) < T->num){
                T = T->ant;
            }
        } else {
            T = I;
            while((num/10) > T->num){
                T = T->sig;
            }
            
        }
        
        T->buscar(num);
    }
};



int main()
{
    srand(time(NULL));
    DobleLista Dbl = DobleLista();
    //Dbl.Imprimir();
    Dbl.Agregar(3);
    Dbl.Agregar(36);
    /*Dbl.Agregar(93);
    Dbl.Agregar(43); */

    for(int i = 0; i<20; i++) {
        int Random = rand()%100;
        Dbl.Agregar(Random);
    }
    Dbl.Imprimir();
}



    
