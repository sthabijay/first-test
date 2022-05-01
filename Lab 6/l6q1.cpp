#include <iostream>
using namespace std;

class rectangle{
	protected:
		int l,b,a;
	public:
		void getdata()
		{
			cout<<"enter length and breadth"<<endl;
			cin>>l>>b;
		}
		void area()
		{
			a=l*b;
			cout<<"area="<<a<<endl;
		}
};

class box: public rectangle{
	int h,v;
	public:
		void geth()
		{
			cout<<"enter height"<<endl;
			cin>>h;
		}
		
		void vol()
		{
			v=l*b*h;
			cout<<"volume="<<v<<endl;
		}
};

main()
{
	box b1;
	b1.getdata();
	b1.geth();
	b1.area();
	b1.vol();
}
