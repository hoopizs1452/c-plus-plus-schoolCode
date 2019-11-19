#include <iostream>
using namespace std;

int gcd(int n, int m)
{
	return (m==0)?n:gcd(m,(n%m));
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
