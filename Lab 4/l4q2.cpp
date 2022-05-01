#include <iostream>
#include <iomanip>
using namespace std;

class Account
{
	private:
		int accNo, balance;
		char name[20];
	public:

		void getData()
		{
			cout << "enter account No: ";
			cin >> accNo;
			cout << "enter balance: ";
			cin >> balance;
			cout << "enter name: ";
			cin >> name;
		}

		void display()
		{
			cout << setw(10)<< accNo << setw(10) << balance << setw(10) << name << endl;
		}

};

main()
{
	Account acc[10];
	int n;
	cout << "Enter no of users: ";
	cin >> n;

	for(int i=0; i<n; i++)
		{
			acc[i].getData();
		}

	cout << setw(10)<<  "AccNo" << setw(10) << "Balance" << setw(10) << "Name" << endl;
	for(int i=0; i<n; i++)
		{
			acc[i].display();
		}
}