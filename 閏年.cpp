#include<iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	
	if( year % 4 == 0 ){
		if( year % 100 != 0 )
			cout << year << "is LeapYear" << endl;
		else if( year % 400 == 0 )
			cout << year << "is LeapYear" << endl;
	}
	else
		cout << year << "is CommonYear" << endl;
 } 
