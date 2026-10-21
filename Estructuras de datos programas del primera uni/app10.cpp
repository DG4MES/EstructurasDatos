#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void burbuja();
void presentar();
	int numero[10];
int main(int argc, char** argv) {

	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		numero[i]=rand()%99;
	}
	//presentar
	cout<<"Desordenados"<<endl;
	presentar();
	burbuja();
	cout<<"ordenados"<<endl;
	presentar();

	

	return 0;
}
void presentar()
{
		for(int i=0;i<10;i++)
	{
		cout<<i<<"-->"<<numero[i]<<endl;
	}
}
void burbuja()
{
	int temp;
	for(int x=0;x<10;x++)
	{
		for(int y=1;y<10;y++)
		{
			if(numero[y-1]>numero[y])
			{
				temp=numero[y];
				numero[y]=numero[y-1];
				numero[y-1]=temp;
				
			}
		}
	}
}
