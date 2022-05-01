#include <iostream>
using namespace std;

int x, y;

int &grt_temp(int &x, int &y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    cout<< "Enter two temperatures: ";
    cin>> x >>y;

    grt_temp(x,y) = 100;

    if(x==100)
        cout<< "higher temperature = " << x << " lower temperature = " <<y;
    else
        cout<< "higher temperature = " << y << " lower temperature = " <<x;

    return 0;

}