#include<iostream>
using namespace std;

int main()
{
	int input, count, min;

	cin >> count;
	
	cin >> min;

	for(int i=0; i<count-1; i++)
	{
		cin >> input;
		
		if(input < min)
		{
			min = input;
		}
	}

	cout << min;
}
