#include <iostream>
#include <iomanip>
using namespace std;

class Data
{
	private:
		int feet, inch;
	public:
		int l;
		void getData()
		{
			cout << "enter feet and inch: ";
			cin >> feet >> inch;
			l = feet * 12 + inch;
		}
		void len(Data, Data);
};

void Data::len(Data datA, Data datB)
{
	int f, i;
	f = (datA.l + datB.l) / 12;
	i = (datA.l + datB.l) % 12;
	cout << "Length: " << f << "'" << i << "\"";
}

int main()
{
	Data dat1, dat2, l;
	dat1.getData();
	dat2.getData();
	l.len(dat1, dat2);
}