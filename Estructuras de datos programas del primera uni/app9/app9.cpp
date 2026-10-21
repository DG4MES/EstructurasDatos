#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool ingreso();
void numeros();
int main(int argc, char** argv) {
	int op;
	do{
		
		cout<<"Menu"<<endl;
		cout<<"1) Ingreso"<<endl;
		cout<<"2) Numeros"<<endl;
		cout<<"3) Numero rand"<<endl;
		cout<<"0) salir"<<endl<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
				ingreso();
				break;
				
			case 2:
				numeros();
				break;
			case 3:
				srand(time(NULL));
				cout<<"Numero: "<<rand()%99<<endl;
			
			
			case 0:
			break;
			
			default:
				cout<<"opcion no valida"<<endl;
				break;
		}
	}while(op!=0);
	return 0;
}
bool ingreso()
{
	int x;
	bool i=false;
	cout<<"ingrese un numero"<<endl;
	cin>>x;
	if(x%2==0)
	{
		cout<<"Full acceso"<<endl;
		i=true;
	}
	return i;
}
void numeros()
{
		for(int i=0;i<10;i++)
	{
		cout<<i<<endl;
	}
}
