#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
		int x;
		double y;
		cin >> x;
		
		y = ( x - 32 ) * 5 % 9;
		
		cout << setprecision(3) << fixed << y << endl;
}
