#include<iostream>
using namespace std;

inline float area(float r)
{
    return 3.1415 * r * r;
}

int main()
{ 
  float r;
  cout<<"Enter Radius";
  cin>>r;
  cout<<"Area of circle "<<area(r);
  return 0;
}