#include <iostream>
using namespace std;

class AddAmount
{
	int amount=50;
	public:
		AddAmount()
		{
			amount+=0;
		}
		
		AddAmount(int A)
		{
			amount+=A;
		}
		
		void display(char para[20])
		{
			cout<<para<<" piggy bank="<<amount<<endl;
		}
};

int main()
{
	AddAmount adefault, a1para(25);
	adefault.display("default");
	a1para.display("one para");
}