#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cin >> num1 >> num2;
	
	while( num1 <= num2 )
	{
		cout << (char)num1;
		num1++;
	}
	cout << endl;
}
