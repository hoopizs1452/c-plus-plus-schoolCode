#include<iostream>
using namespace std;

int main()
{
	int num,count;
	cin >> num;
	
	for(int i=1; i<=num; i++)
	{
		if(num%i==0)
			count++;
	}
	if(count==2)
		cout << "It is a prime number." << endl;
	else
		cout << "It is not a prime number." << endl;
}
