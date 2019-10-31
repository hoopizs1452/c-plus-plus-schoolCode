#include<iostream>
using namespace std;

int main()
{
	int num,total=0;
	
	while(num!=-1)
	{
		cin >> num;
		total += num;
	}
	cout << total+1 << endl;
}
