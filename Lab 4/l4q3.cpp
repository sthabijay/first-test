#include <iostream>
#include <iomanip>
using namespace std;

class information
{
	private:
		int roll;
		char name[20], address[20];
	public:
		void getData()
		{
			cout << "enter Name: ";
			cin >> name;
			cout << "enter roll no: ";
			cin >> roll;
			cout << "enter address: ";
			cin >> address;
		}
		void display();
};

void information::display()
{
	cout << setw(15)<< name << setw(15) << roll << setw(15) << address << endl;
}

main()
{
	information acc[10];
	int n;
	cout << "Enter no of students: ";
	cin >> n;

	for(int i=0; i<n; i++)
		{
			acc[i].getData();
		}

	cout << setw(15)<< "Name" << setw(15) << "Roll No" << setw(15) << "Address" << endl;
	for(int i=0; i<n; i++)
		{
			acc[i].display();
		}
}