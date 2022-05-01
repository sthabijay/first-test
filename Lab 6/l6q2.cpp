#include <iostream>
using namespace std;

class student{
	protected:
		char name[20];
		int roll;
	public:
		void getstu()
		{
			cout<<"enter name and roll"<<endl;
			cin>>name>>roll;
		}
};

class marks: public student{
	protected:
	int ses1, ses2;
	public:
		void getmarks()
		{
			cout<<"enter session1 and session2 marks"<<endl;
			cin>>ses1>>ses2;
		}
};

class result: public marks{
	int tot;
	public:
		void display()
		{
			tot=ses1+ses2;
			cout<<"name="<<name<<endl;
			cout<<"roll="<<roll<<endl;
			cout<<"total="<<tot<<endl;
		}
};

main()
{
	result r1;
	r1.getstu();
	r1.getmarks();
	r1.display();
}
