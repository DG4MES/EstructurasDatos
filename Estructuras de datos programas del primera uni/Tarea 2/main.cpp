#include <iostream>
#include <string>
#include "Estudiante1.h"
#include <iomanip>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Estudiante1 *I,*T,*F;
void agregar(int);
void presentar();
void mejor();
int Mayo;
int main(int argc, char** argv) {
	srand(time(NULL));
	int op;
	do{
	cout<<"Bienvenido al registro de alumnos"<<endl;
	cout<<"1) Agregar "<<endl;
	cout<<"2) Presentar todos "<<endl;
	cout<<"3) mejor estudiante "<<endl;
	cin>>op;
	switch(op) {
	case 1:
			agregar(rand()%999);
			break;
	case 2:
		    presentar();
		    break;
    default:
       cout<<"Ingrese una opcion valida "<<endl;
	
	}

	}while(op!=0);
	
	return 0;
}
void presentar()
{
	T=I;
	Mayo=T->Promedio();
	while(T!=NULL)
	{
		cout<<"El Nombre del alumno es "<<T->Nombre<<endl;
		cout<<"La primera nota es "<<T->N1<<endl;
		cout<<"La segunda nota es "<<T->N2<<endl;
		cout<<"El promedio es de "<<T->Promedio()<<endl;
		cout<<"-----------------------------------------"<<endl;
		T=T->sig;
		if(T!=NULL)
		{
			 if(Mayo<T->Promedio())
		 Mayo=T->Promedio();
		}
		
	}
	
}



void agregar(int c)
{
	string Nombre;
	double N1,N2;
	T=new Estudiante1();
	T->sig=NULL;
	T->Codigo=c;
	cout<<"Ingrese su nombre "<<endl;
	cin>>Nombre;
	cout<<"Ingrese su nota 1"<<endl;
	cin>>N1;
	cout<<"Ingrese su nota 2"<<endl;
	cin>>N2;
	T->Nombre=Nombre;
	T->N1=N1;
	T->N2=N2;
	
	if(I==NULL)
	{
		I=T;
	}
	else
	{
		F->sig=T;
	}
	F=T;
}
