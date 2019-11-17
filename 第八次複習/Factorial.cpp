#include<iostream>
using namespace std;
int factorial(int);

int main()
{
    int num;
    cin >> num;
    cout << factorial(num)<<endl;
}

int factorial(int n)
{
	int sum=1;
	for(int i=1; i<=n; i++)
	{
		sum *= i;
	}
	return sum;
}
