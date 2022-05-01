#include <iostream>
using namespace std;

int &swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;	
}

main()
{
	int a=2, b=3;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	swap(a,b);
	cout<<"A="<<a<<endl<<"B="<<b<<endl;
}
