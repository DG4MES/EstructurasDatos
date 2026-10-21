#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int *p=new int();
	int v;
	*p=500;
	v=20;
	cout<<"ejemplo"<<endl;
	cout<<"p "<<*p<<endl;
	cout<<"v "<<v<<endl;
	
	cout<<"ejemplo 2"<<endl;
	v=25;
	*p=v;
	cout<<"p "<<*p<<endl;
	cout<<"v "<<v<<endl;
	
		cout<<"ejemplo 3"<<endl;
	v=30;
	p=&v;
	cout<<"p "<<*p<<endl;
	cout<<"v "<<v<<endl;
	return 0;
}
