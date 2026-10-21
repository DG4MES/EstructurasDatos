#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	cout<<"Ingrese un numero "<<endl;
	cin>>n;
	switch(n)
	{
	case 1:
		{
			cout<<"uno"<<endl;
		    break;
		}
		case 2: 
		{
			cout<<"dos"<<endl;
			 break;
		}
			case 3: 
		{
			cout<<"tres"<<endl;
			 break;
		}
			default:
		{
			cout<<"opcion no valida"<<endl;
			 break;
		}
		
	}
	return 0;
}
