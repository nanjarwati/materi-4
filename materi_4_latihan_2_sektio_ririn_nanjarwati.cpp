#include<iostream>

using namespace std;

int main()
{
	int c = 2,g = 1;
	
	while(c<=10)
	{
		cout<<"ini adalah bilangan genap ="<<c<<endl;
		c=c+2;
		
	}
	do{
		cout<<"ini adalah bilangan ganjil ="<<g<<endl;
		g=g+2;
	}while(g<=10);
	
	system("pause");
	return 0;
}
