#include <iostream>
#include "nodo.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void agregar(nodo *);
void nuevo(int);
int presentar(nodo *);
nodo *R,*T;
int main(int argc, char** argv) {
	nuevo(34);
	presentar(R);
	return 0;
}
void nuevo(int x)
{
	T=new nodo();
	T->De=NULL;
	T->Iz=NULL;
	T->id=x;
	if(R==NULL)
	{
		R=T;
		
	}
	else
	{
		agregar(R);
	}
}
void agregar(nodo *A)
{
	if(T->id>A->id)
	{
	
	  if(A->De==NULL)
	  {
	  	A->De=T;
	  }
	  else
	  {
	  	agregar(A->De);
	  }
	}
	else
	{
	     if(A->De==NULL)
	  {
	  	A->De=T;
	  }
	  else
	  {
	  	agregar(A->De);
	  }	
	}
	
}
int presentar(nodo *A)
{
	if(A==NULL)
	{
		return 0;
	}
	else{
		cout<<A->id<<endl;
		presentar(A->Iz);
		presentar(A->De);
		return 0;
	}
}
