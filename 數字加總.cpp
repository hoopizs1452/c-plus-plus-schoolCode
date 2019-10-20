#include<iostream>
using namespace std;

int main()
{
	int x,a,b,c,sum;
	cin >> x;
	
	a = x / 100;
	b = x % 100 / 10;
	c = x % 100 % 10;
	sum = a + b + c;
	
	cout << sum << endl;
}
