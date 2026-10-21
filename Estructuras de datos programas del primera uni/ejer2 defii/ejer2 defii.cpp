/*Ejercicio 2 – Juego de números
Construir un programa con el menú:
1) Adivinar número
2) Tabla de multiplicar
3) Mostrar números pares
0) Salir

En Adivinar número, generar un número aleatorio entre 1 y 10, solicitar al usuario un número y utilizar
una función bool adivinar() que indique si acertó.
En Tabla de multiplicar, solicitar un número y mediante un for mostrar su tabla del 1 al 10.
En Mostrar números pares, utilizar un ciclo para mostrar los números pares comprendidos entre 2 y 50.
Cada operación deberá realizarse mediante una función o procedimiento independiente.*/
#include <iostream>
#include<time.h>
 using namespace std;
bool adivinar();
void mostrarNumeros();
void tablademultiplicar();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	bool continuar=true;
do{
cout<<"Menu"<<endl;
 cout<<"1) Adivinar numero"<<endl;
 cout<<"2) Tabla de multiplicar"<<endl;
  cout<<"3) Mostrar numeros pares"<<endl;
   cout<<"0) Salir"<<endl;
   
   int n;
cin>>n;
switch(n)
{
case 0:
		continuar=false;
case 1:
if(adivinar()==true)
cout<<"Felicidades adivino";
else
cout<<"No adivino sera la proxima";
break;
case 2:
 tablademultiplicar();
 break;
case 3:
	mostrarNumeros();
	break;

}

}while(true);
}
void tablademultiplicar()
 {
 	int num;
 	cout<<"ingrese un numero: ";
 	cin>>num;
		for(int i=1;i<=10;i++)
		{
			cout<<num<<"x"<<i<<"="<<num*i<<endl;
		}
 }
void mostrarNumeros()
 {
 	cout<<"------------"<<endl;
		for(int i=2;i<=50;i++)
		{
			if(i%2==0)
			cout<<i<<endl;
		}
 }

bool adivinar()
{
int num,rando;
srand(time(NULL));
rando=rand()%(10)+1;
cout<<"Ingrese un numero "< cin>>num;
if(rando==num)
return true;

else
return false;

}
