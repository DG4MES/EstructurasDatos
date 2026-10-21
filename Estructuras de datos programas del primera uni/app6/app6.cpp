#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n=5;
	
	
	for(int i=0;i<n;i++)
	{
		for(int x=0;x<n;x++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	
	for(int i=0;i<n;i++)
	{
		for(int x=0;x<=i;x++)
		{
			cout<<" *";
		}
		cout<<"\n";
		
	}
		cout<<"\n";
	

	for(int i=0;i<n;i++)
	{
		for(int x=0;x<n-i;x++)
		{
			cout<<" *";
		}
		cout<<"\n";
	
	}
	
		cout<<"\n";
	
 
	for(int i=0;i<n;i++)
	{
			for(int x=0;x<n-i;x++)
		{
			cout<<" ";
		}
		for(int x=0;x<=i;x++)
		{
			cout<<" *";
		}
		cout<<"\n";

	}
	
	for(int i=0;i<n;i++)
	{
			for(int x=0;x<=n-i;x++)
		{
			cout<<"  ";
		}
		for(int x=0;x<=i;x++)
		{
			cout<<" *";
		}
		cout<<"\n";

	}
	return 0;
	
}
