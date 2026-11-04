# FILAS

las filas son secuencias de elementos ordenados.
en listas solo tenemos tres metodos:
    - Agregar
    - Proximo
    - Ver


```cpp
void Agregar(int num) {
    T = new Nodo();
    T->sig = NULL;
    T->id = num;
    
    if(I == NULL){
        I = T;
    } else{
        F->sig = T;
    }
    F = T;
}

void proximo(){
    I = I->sig;
}

void ver(){
    cout << "ID: " << I->id << endl;
}
```