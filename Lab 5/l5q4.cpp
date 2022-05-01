#include <iostream>
using namespace std;

class Rectangle
{
		int l,b,a;
	public:
		Rectangle()
		{
			l=b=0;
			area();
		}

		Rectangle(int al, int ab)
		{
			l=al;
			b=ab;
			area();
		}

		Rectangle(int L)
		{
			l=b=L;
			area();
		}

		int area()
		{
			a=l*b;
			return a;
		}

		void display(char para[20])
		{
			cout << para << " area=" << a << endl;
		}
};

int main()
{
	Rectangle rdefault, r1para(4), r2para(7,3);
	rdefault.display("default");
	r1para.display("one para");
	r2para.display("two para");;
	return 0;
}