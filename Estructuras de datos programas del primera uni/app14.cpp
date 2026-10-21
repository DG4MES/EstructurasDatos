#include <iostream>
#include "nodo.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
nodo v;
nodo *p=new nodo();
nodo *I,*T,*F,*T2,*A;
void agregar(int);
void presentar();
void minimo();
void maximo();
void buscar(int);
void agregarA();
void eliminar();
int main(int argc, char** argv) {
int op,x;
do{
	cout<<"Menu"<<endl;
	cout<<"1) agregar aleatorio"<<endl;
	cout<<"2) presentar"<<endl;
	cout<<"3) minimo "<<endl;
	cout<<"4) Buscar "<<endl;
	cout<<"5) Modificar "<<endl;
	cout<<"6) eliminar"<<endl;
	cout<<"0) salir "<<endl;
	cin>>op;
	switch(op)
	{
			case 1:
		agregarA();
		break;
	case 2:
	 presentar();
	break;
	case 3:
		minimo();
		break;
	case 4:
		cout<<"Ingrese numero a buscar"<<endl;
		cin>>x;
		buscar(x);
		if(T==NULL)
		{
			cout<<"Registro no encontrado "<<endl;
		}
		else
		{
			cout<<"Registro Encontrado "<<T->id<<endl;
		}
		break;
		case 5:
		cout<<"Ingrese numero a Modificar"<<endl;
		cin>>x;
		buscar(x);
		if(T==NULL)
		{
			cout<<"Registro no encontrado "<<endl;
		}
		else
		{
			cout<<"Registro Encontrado "<<T->id<<endl;
			cout<<"Ingrese el nuevo valor "<<endl;
			cin>>T->id;
		}
		break;
		case 6:
			cout<<"Ingrese numero a eliminar"<<endl;
		cin>>x;
		buscar(x);
		if(T==NULL)
		{
			cout<<"Registro no encontrado "<<endl;
		}
		else
		{
			cout<<"Registro Encontrado "<<T->id<<endl;
		   eliminar();
		}
			break;
		case 0:
		break;
		default:
			cout<<"opcion no valida"<<endl;
	}

}while(op!=0);
 
	return 0;
}
void eliminar()
{
	if(I=T)
	{
		I=I->sig;
	}
	else if(F==T)
	{
		A->sig=NULL;
		F=A;
	}
	else{
		A->sig=T->sig;
	}
}
void buscar(int b)
{
	bool encontrado=false;
	T=I;
	A=I;
	while(T!=NULL && !encontrado)
	{
		
			if(T->id==b)
			{
				encontrado=true;
				
			}
			else
			{
				A=T;
				T=T->sig;
			}
		
	}
	
}

void agregarA()
{ 
 srand(time(NULL));
  int li=rand()%15;
  for(int i=0;i<li;i++)
  {
  	agregar(rand()%100);
  }
}
void agregar(int i)
{
	T=new nodo();
	T->sig=NULL;
	T->id=i;
	
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

void maximo()
{
	T=I;
	T2=I;
	while(T!=NULL)
	{
		if(T->id>T2->id)
		{
			T2=T;
		}
		T=T->sig;
	}
}
void presentar()
{
	T=I;
	while(T!=NULL)
	{
		cout<<"ID:	 "<<T->id<<endl;
		T=T->sig;
	}
}

void minimo()
{
	T2=I;
	T=I;
	while(T!=NULL)
	{
		if(T->id<T2->id)
		T2=T;
		T=T->sig;
	}
	cout<<"El minimo es "<<T2->id<<endl;
	
}
