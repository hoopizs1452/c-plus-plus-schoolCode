#include <iostream>
using namespace std;

int fibonacci(int n)
{
	return (n==1||n==2)?(n-1):(fibonacci(n-1)+fibonacci(n-2));
	
}

int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << fibonacci(number) << endl;
	}

	return 0;
}
