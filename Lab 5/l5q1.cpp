#include<iostream>
using namespace std;
class Complex
{
		int real,img,x,y;
	public:
		void getdata()
		{
			cin>>x>>y;
			real = x;
			img = y;
		}
		Complex sum(Complex c1, Complex c2);
		void display()
		{
			cout<<"Sum="<<real<<" + "<<img<<"i"<<endl;
		}
};

Complex Complex::sum(Complex c1, Complex c2)
		{
			Complex c3;
			c3.real = c1.real + c2.real;
			c3.img = c1.img + c2.img;

			return c3;
		}

int main()
{
	Complex c1,c2,c3;
	
	cout<<"enter 1st complex number: ";
	c1.getdata();
	cout<<"enter 2nd complex number: ";
	c2.getdata();

	c3 = c1.sum(c1,c2);
	c3.display();
	return 0;
}