#include <iostream>
using namespace std;

class Test
{
		int code, price;
	public:
		Test(int acode, int aprice)
		{
			code=acode;
			price=aprice;
		}

		Test(Test &obj)
		{
			code=obj.code;
			price=obj.price;
		}

		void display()
		{
			cout<<"code="<<code<<endl<<"price="<<price<<endl;
		}
};

int main()
{
	Test t(123, 499);
	Test tcopy(t);
	tcopy.display();
}