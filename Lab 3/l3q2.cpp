#include<iostream>
using namespace std;

int &zero_small(int &a, int &b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	int x,y;
	cout<<"enter two nums";
	cin>>x>>y;
	zero_small(x,y)=0;
	cout<<"1st num"<<x;
	cout<<"\n2nd num"<<y;
    return 0;
}

