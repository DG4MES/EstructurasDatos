#include <iostream>
#include "estudiante.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*chris joan vega auxume 20242030254*/	
using namespace std;
Estudiante alu[5];
Estudiante temp[1];
int pos=0;
void promediobajo();
 void burbuja();
void agregar(int x);
void presentar(int x);
int main(int argc, char** argv) {
int op;
do{
	cout<<"1) Agregar"<<endl;
	cout<<"2) Presentar "<<endl;
	cout<<"3) ordenar "<<endl;
		cout<<"4) promedio menor "<<endl;
	cout<<"0) Salir "<<endl;
	
	cin>>op;
	
	switch(op)
	{
		case 1: 
		agregar(pos);
		pos++;
		break;
		case 2:
			presentar(pos);
			break;
		case 3:
			burbuja();
			presentar(pos);
			break;
				case 4:
		   promediobajo();
			break;
		case 0:
			break;
		default :
			cout<<"opcion no valida"<<endl;
			
	}
}while(op!=0);


	return 0;
}

void agregar(int x)
{
	cout<<"Ingrese ID"<<endl;
	cin>>alu[x].id;
	cout<<"Nombre "<<endl;
	cin>>alu[x].nombre;
	cout<<"Nota 1"<<endl;
	cin>>alu[x].N1;
	cout<<"Nota 2"<<endl;
	cin>>alu[x].N2;
	
	}
	
	void presentar(int x)
	{
		if(x==0)
		cout<<"No hay nadie a quien presentar"<<endl;
		else
		for(int i=0;i<x;i++)
		{
	cout<<"ID: "<<alu[i].id<<endl;
	cout<<"Nombre "<<alu[i].nombre<<endl;
	cout<<"Nota 1:"<<alu[i].N1<<endl;
	cout<<"Nota 2:"<<alu[i].N2<<endl;
	cout<<"Promedio:"<<alu[i].promedio()<<endl;
	cout<<"*******************"<<endl;;
		}
	}
	void promediobajo()
	{
		int menor=0;
		for(int i=0;i<pos;i++)
		{
			if(alu[menor].promedio()>=alu[i].promedio())
			menor=i;
			
		}
		cout<<"El alumno con promedio menor es "<<alu[menor].nombre<<endl;
		cout<<"***************************";
		
		
		
	}
  void burbuja()
  {
  
  	for(int x=1;x<pos;x++)
  	{
  		for(int y=1;y<pos;y++)
  		{
  				if(alu[y-1].promedio()>alu[y].promedio())
  				{
  					temp[0]=alu[y];
  					alu[y]=alu[y-1];
  					alu[y-1]=temp[0];
  					
				  }
		  }
  	
	  }
  	
  }
