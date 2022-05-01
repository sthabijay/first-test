#include<iostream>
using namespace std;

struct date{
	int mm, dd, yy;
}dt;

int display(date dt)
{
	cout<<dt.mm<<"/"<<dt.dd<<"/"<<dt.yy;
}

int main()
{
	cout<<"enter months, days and year";
	cin>>dt.mm>>dt.dd>>dt.yy;
	display(dt);	
}