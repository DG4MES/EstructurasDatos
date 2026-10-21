#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char letra='n';
     do
	{
		cout<<"Desea Continuar s/n "<<endl;
		cin>>letra;
	}while(letra=='s');
	return 0;
}
