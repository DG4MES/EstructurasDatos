# FILAS

las filas son secuencias de elementos ordenados. El primero en entrar es el primero en salir.
En las listas solo tenemos tres metodos:
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
	if(I == NULL){
		cout << "Lista Vacia" << endl;
	} else {
		I = I->sig;
	}
    
}

void ver(){
	if(I == NULL){
		cout << "Lista Vacia" << endl;
	} else {
    	cout << "ID: " << I->id << endl;
	}
}

```

# PILA
Contrario a la fila, el ultimo en entrar es el primer elemento en salir.
En Pilas tenemos solamente el puntero base (I) e Intermedio (T).
Sus metodos son: Push - Pop - Peek.

```cpp
void push(int num){
    T = new Nodo();
    T->id = num;
    
    if(I == NULL){
        I = T;
    } else {
        T->sig = I;
    }
    
    I = T;
}

void pop(){
    if(I == NULL){
        cout << "La lista está vacia" << endl;
    } else {
        cout << "ID: " << I->id << endl;
        I = I->sig;
    }
}

void peek(){
    if(I == NULL){
        cout << "La lista está vacia" << endl;
    } else {
    cout << "ID: " << I->id << endl;
    }
}
```

# Arbol Binario

El arbol es una estructura de datos en donde se compara el valor de cada nodo para determinar si va a la
derecha o a la izquierda el siguiente elemento.
EL arbol puede recorrerse de 3 maneras distintas:
- Pre-Orden
- Orden
- Post-Orden


