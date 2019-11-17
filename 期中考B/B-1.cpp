#include<iostream>
using namespace std;

int main()
{
	int num,a,b,c,d,e;
	cin >> num;
	
	a = num / 10000;
	b = num % 10000 / 1000;
	c = num % 10000 % 1000 / 100;
	d = num % 10000 % 1000 % 100 / 10;
	e = num % 10;
	
	if(a==e && b==d)
		cout << "It is a Palindrome text." << endl;
	else
		cout << e << d << c << b << a << endl;
}
