#include<iostream>
using namespace std;

int main()
{
	int num,max=0,min=0;
	cin >> num;
	max = min = num;
	
	for(int i=1; i<=4; i++)
	{
		cin >> num;
		
		if(num>max)
			max = num;
		else if(num<min)
			min = num;
	}
	cout << max << min << endl;
} 
