#include <iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
	void setA()
	{
		cout<<"enter a"<<endl;
		cin>>a;
	}
};

class B: virtual public A{
	protected:
		int b;
	public:
	void setB()
	{
		cout<<"enter b"<<endl;
		cin>>b;
	}
};

class C: virtual public A{
	protected:
		int c;
	public:
	void setC()
	{
		cout<<"enter c"<<endl;
		cin>>c;
	}
};

class D: public B{
	protected:
		int d;
	public:
	void setD()
	{
		cout<<"enter d"<<endl;
		cin>>d;
	}
};

class E: public D, public C{
		int tot;
	public:
	void output()
	{
		tot=a+b+c+d;
		cout<<"total="<<tot<<endl;
	}
};

main()
{
	E e1;
	e1.setA();
	e1.setB();
	e1.setC();
	e1.setD();
	e1.output();
}
