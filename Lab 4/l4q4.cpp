#include <iostream>
#include <iomanip>
using namespace std;

class Data
{
	private:
		int x, y, g;
	public:
		void getData();
		void greater();
		void display();
};

void Data::getData()
{
	cout << "enter two nos: ";
	cin >> x >> y;
	greater();
}

void Data::greater()
{
	x > y ? g = x : g = y;
	display();
}

void Data::display()
{
	cout << "greater: " << g;
}


int main()
{
	Data dat;
	dat.getData();
}