#include<iostream>
using namespace std;

int main()
{
	int x,tt,ot,fh,th,oh,ft,ten,five,one;
	cin >> x;
	
	tt = x / 2000;
	ot = x % 2000 / 1000;
	fh = x % 2000 % 1000 / 500;
	th = x % 2000 % 1000 % 500 /200;
	oh = x % 2000 % 1000 % 500 % 200 / 100;
	ft = x % 2000 % 1000 % 500 % 200 % 100 / 50;
	ten = x % 2000 % 1000 % 500 % 200 % 100 % 50 / 10;
	five = x % 2000 % 1000 % 500 % 200 % 100 % 50 % 10 / 5;
	one = x % 2000 % 1000 % 500 % 200 % 100 % 50 % 10 % 5 / 1;
	
	if( x < 0 )
		cout << "Error" << endl;
	else
		cout << "2000:" << tt << endl;
		cout << "1000:" << ot << endl;
		cout << "500:" << fh << endl;
		cout << "200:" << th << endl;
		cout << "100:" << oh << endl;
		cout << "50:" << ft << endl;
		cout << "10:" << ten << endl;
		cout << "5:" << five << endl;
		cout << "1:" << one << endl;
}
