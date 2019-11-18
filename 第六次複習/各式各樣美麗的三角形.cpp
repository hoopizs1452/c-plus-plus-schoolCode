#include<iostream>
using namespace std;

int main()
{
	int n,m,i,j,k;
	cin >> n >> m;
	
	if(n==1)
	{
		for(i=1; i<=m; i++)
		{
			for(j=1; j<=m; j++)
			{
				if(i>=j)
					cout << '*';
				else
					cout << '-';
			}
			cout << endl;
		}
	}
	
	if(n==2)
	{
		for(i=1; i<=m; i++)
		{
			for(j=1; j<=m; j++)
			{
				if(i+j>m+1)
					cout << '-';
				else
					cout << '*'; 
			}
			cout << endl;
		}
	}
	
	if(n==3)
	{
		for(i=1; i<=m; i++)
		{
			for(j=1; j<=m; j++)
			{
				if(i+j>=m+1)
					cout << '*';
				else
					cout << '-';
			}
			cout << endl;
		}
	}
	
	if(n==4)
	{
		for(i=1; i<=m; i++)
		{
			for(j=1; j<=m; j++)
			{
				if(i==j)
					cout << '*';
				else if(i<=j)
					cout << '*';
				else
					cout << '-';
			}
			cout << endl;
		}
	}
} 
