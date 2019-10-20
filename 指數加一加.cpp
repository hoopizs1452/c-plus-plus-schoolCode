#include<iostream>
using namespace std;

int main()
{
	int n,m,total=0;
	cin >> n >> m;
	
	while( n <= m )
	{
		int i=0,num=1;
		while( i++ < n )
		{
			num *= 2;
		}
		total += num;
		n++;
	}
	cout << total << endl;	
}
