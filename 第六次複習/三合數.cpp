#include<iostream>
using namespace std;

int main()
{
	int n,total=0,i,j,k;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			for(k=j;k<=n;k++)
			{
				if(i*i+j*j==k*k)
				total++;	
			}
		}
		
	}
	cout << total << endl;	
} 
