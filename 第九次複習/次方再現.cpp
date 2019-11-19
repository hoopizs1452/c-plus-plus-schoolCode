#include <iostream>
using namespace std;

int power(int n, int m)
{
	return (m==0)?1:(n*power(n, m-1));
}

int main()
{
	int base, exp;

	for(int i=0; i<10; i++)
	{
		cin >> base >> exp;
		cout << power(base, exp) << endl;
	}

	return 0;
}
