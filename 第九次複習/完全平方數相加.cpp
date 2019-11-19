#include <iostream>
using namespace std;

int sumSquareNumber(int n)
{
	return (n==1)?1:((n*n)+sumSquareNumber(n-1));
}

int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << sumSquareNumber(number) << endl;
	}

	return 0;
}
