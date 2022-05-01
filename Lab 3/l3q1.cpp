#include<iostream>
using namespace std;

int hms_to_sec(int hr,int min, int sec)
{
int seconds =0;
seconds = (hr*60*60)+(min*60)+sec;
return seconds;
}

int main()
{
int hr,min,sec;
cout << "enter hrs, mins & secs" ;
cin >> hr>> min>> sec;
int result =hms_to_sec(hr,min,sec);
cout << "total seconds = " << result; 
return 0;
}
 
