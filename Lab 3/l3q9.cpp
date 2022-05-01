#include<iostream>
using namespace std;

struct length
{
    int ft, in;
}ln;

int &scale(length &ln)
{
    if(ln.in>=12)
    {
        ln.ft= ln.ft + (ln.in/12);
        ln.in = ln.in % 12;
    }
    cout<<"The length is: ";
    cout<<ln.ft<<"'"<<ln.in<<"''";
}

int main()
{
    cout<<"Enter the lenght in feet and inches: ";
    cin>>ln.ft>>ln.in;
    scale(ln);
    return 0;
}