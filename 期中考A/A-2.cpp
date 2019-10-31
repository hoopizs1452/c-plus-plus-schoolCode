#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double num,total;
	cin >> num;
	total = num;
	
	for(int i=1; i<=4; i++)
	{
		cin >> num;
		total += num;
	}
	cout << setprecision(2) << fixed << total/5 << endl;
} 
