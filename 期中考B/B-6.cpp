#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num1,num2;
	cin >> num1 >> num2;
	
	for(int i=1; i<=9; i++)
	{
		for(int j=num1; j<=num2; j++)
		{
			cout << j << "*" << i << "=" << setw(6) << i*j << "\t";
			
		} 
		cout << "\n";
	}
}
