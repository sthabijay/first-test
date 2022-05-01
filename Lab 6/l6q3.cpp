#include <iostream>
using namespace std;

class student
{
	protected:
		char name[20];
		int age;
	public:
		void getstu()
		{
			cout<<"enter name and age"<<endl;
			cin>>name>>age;
		}
		void displaystu()
		{
			cout<<"name="<<name<<endl;
			cout<<"age="<<age<<endl;
		}
};

class boarder: public student
{
		int rn;
	public:
		void getrn()
		{
			cout<<"enter room num"<<endl;
			cin>>rn;
		}

		void displayrn()
		{
			cout<<"room num="<<rn<<endl;
		}
};

class dayscholar: public student
{
		char add[20];
	public:

		void getadd()
		{
			cout<<"enter address"<<endl;
			cin>>add;
		}

		void displayadd()
		{
			cout<<"address="<<add<<endl;
		}
};

main()
{
	boarder b1;
	dayscholar d1;

	b1.getstu();
	b1.getrn();
	d1.getstu();
	d1.getadd();
	
	cout<<endl;
	
	b1.displaystu();
	b1.displayrn();
	
	cout<<endl;
	
	d1.displaystu();
	d1.displayadd();
}
