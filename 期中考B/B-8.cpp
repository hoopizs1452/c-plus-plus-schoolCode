#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=num; j++)
		{
			if(i==1 || i==j || j==num)
					cout << "*";
			else 
				cout << "-";
		}
		cout << endl;
	}
}
