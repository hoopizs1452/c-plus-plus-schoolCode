#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
			cout << "It is a right triangle." << endl;
		else
			cout << "It is not a right triangle." << endl;
	}
	else
		cout << "Not a triangle." << endl;
}
