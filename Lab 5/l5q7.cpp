#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Employee
{
		int id,sal;
		char name[20];

	public:
		Employee(int aid, int asal, char aname[20])
		{
			id=aid;
			sal=asal;
			strcpy(name,aname);
		}

		display()
		{
			if(sal>5000)
				cout<<setw(10)<<id<<setw(10)<<sal<<setw(15)<<name<<endl;
		}
};

main()
{
	Employee e1(234, 4500, "Ram Nepal");
	Employee e2(124, 5500, "Shyam Butan");
	Employee e3(324, 6000, "Sita China");
	
	cout<<setw(10)<<"Id"<<setw(10)<<"Salary"<<setw(15)<<"Name"<<endl;
	e1.display();
	e2.display();
	e3.display();

}
