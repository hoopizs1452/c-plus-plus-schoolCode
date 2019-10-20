#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int high,gender;
	cin >> high;
	cin >> gender;
	
	if( gender == 1 )
		cout << setprecision(1) << fixed << ( high - 80 ) * 0.7 << endl;
	else if( gender == 2 )
		cout << setprecision(1) << fixed << ( high - 70 ) * 0.6 << endl;
}
