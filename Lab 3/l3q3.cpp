#include<iostream>
using namespace std;
int x,y;

int &great(int &a, int &b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	cout<<"enter two nums";
	cin>>x>>y;
	great(x,y)=0;
	cout<<"1st num"<<x;
	cout<<"\n2nd num"<<y;
    return 0;
}
