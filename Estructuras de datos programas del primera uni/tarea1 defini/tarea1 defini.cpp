#include <iostream>
#include<time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool parImpar();
void mostrarNumeros();
void numeroAleatorio();
int main(int argc, char** argv) {
	/*Ejercicio 1 – Menú de operaciones con números
Crear un programa que muestre repetidamente:
MENU
1) Determinar Par o Impar
2) Mostrar números del 1 al 20
3) Generar número aleatorio
0) Salir*/
int n;
bool continuar=true;
do{
cout<<"Menu"<<endl;
cout<<"1) Determinar par o impar"<<endl;
cout<<"2) Mostrar numeros del 1 al 20"<<endl;
cout<<"3) Generar numero aleatorio"<<endl;
cout<<"0) Salir"<<endl;
cin>>n;
switch(n)
{
	case 0:
		continuar=false;
		break;
		
	case 1:
		
	    if(parImpar()==true)
	    cout<<"Es par el numero"<<endl;
	    else
	    cout<<"Es impar el numero"<<endl;
		break;
	case 2:
  mostrarNumeros();
		break;
	
	case 3:
	   numeroAleatorio();
		break;
	default:
		cout<<"No eligio ninguna opcion"<<endl;
		break;
		
}
  }while(continuar);

		return 0;
}

void numeroAleatorio()
 {
 	int n;
 	srand(time(NULL));
		n=rand()%999;
		cout<<n<<endl;
 }
void mostrarNumeros()
 {
 	cout<<"------------"<<endl;
		for(int i=1;i<=20;i++)
		{
			cout<<i<<endl;
		}
 }
 bool parImpar()
 {
 		int num;
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		if(num%2==0)
		return true;
		else 
		return false;
 }
