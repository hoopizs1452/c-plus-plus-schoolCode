#include <iostream>
using namespace std;
int factorial(int);


int main()
{
	int number;
	
	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << factorial(number)<<endl;
	}

	return 0;
}

int factorial(int num)
{
	return (num==0 || num==1)?num:(num*factorial(num-1));
}
