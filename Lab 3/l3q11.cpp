#include<iostream>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n;
    cout<<"enter a num";
    cin>>n;
    cout <<n<<"th term = "<<fib(n);
    return 0;
}