#include<iostream>
using namespace std;

int main()
{
	int num;
	
	for(int i=1;i<=5;i++)
	{
		cin >> num;
		for(int j=1;j<=num;j++)
		{
			cout << '*';
		}
		cout << endl;
	}
} 
