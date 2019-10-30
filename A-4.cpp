#include<iostream>
using namespace std;

int main()
{
	int num,max=0;
	
	while(num!=-1)
	{
		cin >> num;
		
		if(num>max)
			max = num;
	}
	cout << max << endl;
}
