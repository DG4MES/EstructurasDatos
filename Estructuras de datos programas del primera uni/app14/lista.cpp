#include "lista.h"
lista::lista(){
	I=NULL;
	T=NULL;
	F=NULL;
	T2=NULL;
	A=NULL;
}
lista::void eliminar()
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
lista::void buscar(int b)
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

lista::void agregarA()
{ 
 srand(time(NULL));
  int li=rand()%15;
  for(int i=0;i<li;i++)
  {
  	agregar(rand()%100);
  }
}
lista::void agregar(int i)
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

lista::void maximo()
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
lista::void presentar()
{
	T=I;
	while(T!=NULL)
	{
		cout<<"ID:	 "<<T->id<<endl;
		T=T->sig;
	}
}

lista::void minimo()
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
