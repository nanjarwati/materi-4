#include<iostream>

using namespace std;

int main()
{

	int i = 1,j = 1;
	
	cout<<"perulangan dengan for,nilai=1"<<endl;
	cout<<"perulangan dengan for,nilai=2"<<endl;
	cout<<"perulangan dengan for,nilai=3"<<endl;
	
	for(int i=1;i<2;i++)
{
	
	cout<<"perulangan dengan for,nilai=4"<<endl;
	cout<<"perulangan dengan for,nilai=5"<<endl;
	
}

	
	while(i<=5)
	{
		cout<<"perulangan dengan while,nilai= "<<i<<endl;
		i=i+1;
		
	}
	do{
		cout<<"perulangan dengan do-while,nilai="<<j<<endl;
		j=j+1;
	}while(j<=5);
	
	system("pause");
	return 0;
}
