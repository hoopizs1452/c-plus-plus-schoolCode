#include<iostream>
using namespace std;

int main()
{
	int num,a,b,c,d,a1,b1,c1,d1;
	cin >> num;
	
	a = num / 1000;
	b = num % 1000 / 100;
	c = num % 1000 % 100 / 10;
	d = num % 1000 % 100 % 10;
	
	a1 = ( a + 3 ) % 10;
	b1 = ( b + 3 ) % 10;
	c1 = ( c + 3 ) % 10;
	d1 = ( d + 3 ) % 10;
	
	cout << c1 << d1 << a1 << b1 << endl;
}
