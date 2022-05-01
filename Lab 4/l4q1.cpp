#include <iostream>
using namespace std;
class toConvert
{

private:
    int x;
    float f;
public:
    void getdata(int c)
    {
        x=c;
    }
    
    void convert()
    {
        f= (x*9/5)+32;
    }
    
    void display()
    {
         cout<<"Temperature in Fahrenheit= "<<f;
    }
};

main()
{
    toConvert temp;
    int c;

    cout<< "Enter temperature in Celsius: ";
    cin>> c;

    temp.getdata(c);
    temp.convert();
    temp.display();
}