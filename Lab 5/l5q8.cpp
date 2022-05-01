#include <iostream>
using namespace std;

class Add
{
		int l,b,area;

	public:

		Add()
		{	}

		Add(int al, int ab)
		{
			l=al;
			b=ab;
			getdata();
		}
		
		~Add()
		{	
			cout<<"deconstructor called"<<endl;		
		}

		void getdata()
		{
			cout<<"enter length and breadth";
			cin>>l>>b;
			are();
		}

		int are()
		{
			area=l*b;
			return area;
		}

		Add sum(Add a1, Add a2)
		{
			Add a3;
			a3.area=a1.area+a2.area;
			return a3;
		}

		void displayarea()
		{
			cout<<"sum of area="<<area<<endl;
		}

};

main()
{
	Add a1, a2, a3;
	a1.getdata();
	a2.getdata();

	a3=a3.sum(a1, a2);
	a3.displayarea();
}
