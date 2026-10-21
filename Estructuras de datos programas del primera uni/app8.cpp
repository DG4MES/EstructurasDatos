#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void numeros(int);
void numeros();
int par();
int main(int argc, char** argv)
 {
	//numeros(6);
	cout<<par();
	return 0;
}
int par()
{
	return 2;
}

void numeros(int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<i<<endl;
	}
}

void numeros()
{
		for(int i=0;i<10;i++)
	{
		cout<<i<<endl;
	}
}

