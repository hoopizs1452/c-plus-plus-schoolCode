#include<iostream>
using namespace std;

int main()
{
	int num,n=0;
	int freq[10]={};
	
	
	for(int i=0; i<10; i++)
	{
		cin >> num;
		if(num>=10&&num<=100)
		{
			for(int j=0; j<=i; j++)
			{
				if(freq[j]==num)
				{
					break;
				}
				if(j==i)
				{
					freq[n] = num;
					n++;
				}
			} 
		}
		
	}
		for(int k=0;k<n;k++)
			{
				cout << freq[k] << " ";
			}
}
