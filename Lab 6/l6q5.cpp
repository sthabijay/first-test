#include <iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
	void input()
	{
		cout<<"enter a"<<endl;
		cin>>a;
	}
};

class B: public A{
	protected:
		int b;
	public:
	void input()
	{
		cout<<"enter b"<<endl;
		cin>>b;
	}
};

class C: public B{
	protected:
		int tot;
	public:
	void output()
	{
		tot=a+b;
		cout<<"total="<<tot<<endl;
	}
};

main()
{
	C c1;
	c1.A::input();
	c1.B::input();
	c1.output();
}

