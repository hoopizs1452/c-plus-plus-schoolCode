#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[20];
	int i=0,strl;
	cin >> a; 
	
	strl = strlen(a)-1;
	for(; a[i]; i++)
	{
		if(a[i]>='a' && a[i]<='z')
			a[i] -= 32;
		else if(a[i]>='A' && a[i]<='Z')
			a[i] += 32;
	}
	for(i=strl; i>=0; i--)
		cout << a[i];
	cout << endl;
}
