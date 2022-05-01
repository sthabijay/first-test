#include<iostream>
using namespace std;

struct length
{
    int ft, in;
}ln;

int &display(length &ln)
{
	cout<<"The length is: ";
    cout<<ln.ft<<"ft"<<ln.in<<"in";
}

int &scale(length &ln)
{
    if(ln.in>=12)
    {
        ln.ft= ln.ft + (ln.in/12);
        ln.in = ln.in % 12;
    }
    display(ln);
}

int main()
{
    cout<<"Enter the lenght in feet and inches: ";
    cin>>ln.ft>>ln.in;
    scale(ln);
    return 0;
}