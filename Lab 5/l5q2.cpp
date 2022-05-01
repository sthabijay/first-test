#include <iostream>
#include <iomanip>
using namespace std;

class Account
{
		int accNo, bal;
	public:
		void getData()
		{
			cout << "Ent account No: ";
			cin >> accNo;
			cout << "Ent balance: ";
			cin >> bal;
		}
		void display()
		{
			cout << setw(10) << accNo << setw(10) << bal << endl;
		}
		void moneyTransfer(Account &acc, int yourAcc, int toAcc, int toBal)
		{
			if(acc.accNo == yourAcc)
				{
					acc.bal = acc.bal - toBal;
				} 
			if(acc.accNo == toAcc)
				{
					acc.bal = acc.bal + toBal;
				}
		}
};

main()
{
	Account acc[20], op;
	int n;
	cout << "How many: ";
	cin >> n;

	for(int i=0; i<n; i++)
		{
			acc[i].getData();
		}

	cout << setw(10) << "\nAccount No" << setw(10) << "Balance" << endl;
	for(int i=0; i<n; i++)
		{
			acc[i].display();
		}

	int yourAcc, toAcc, toBal;
	cout << "\nEnter sender's acc No: ";
	cin >> yourAcc;

	cout << "Ent recepient accNo and bal to be transferred: ";
	cin >> toAcc >> toBal;

	for(int i = 0; i < n; i++)
		{
			op.moneyTransfer(acc[i], yourAcc, toAcc, toBal);
		}

	cout << setw(10) << "\nAccount No" << setw(10) << "Balance" << endl;
	for(int i=0; i<n; i++)
		{
			acc[i].display();
		}
}