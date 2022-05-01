#include <iostream>
using namespace std;

class Rectangle
{
		int l,b,a;
	public:
		Rectangle(int al, int ab)
		{
			l=al;
			b=ab;
			area();
		}

		int area()
		{
			a=l*b;
			return a;
		}

		void display(char type[20])
		{
			cout<<type<<" area="<<a<<endl;
		}
};

main()
{
	Rectangle r_imp(4,5);
	Rectangle r_exp = Rectangle(2,7);

	r_imp.display("implicitly");
	r_exp.display("explicitly");
}
