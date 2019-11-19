#include <iostream>
using namespace std;

int gcd(int n, int m)
{
	return ((n>m)?(n==0)?m:(n%m):((n==0)?m:(m%n)));
}

int main()
{
	int num_1, num_2;

	for(int i=0; i<10; i++)
	{
		cin >> num_1 >> num_2;
		cout << gcd(num_1, num_2) << endl;
	}

	return 0;
}
