#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int count=0;
	cin >> str;
	
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]==47)
		{
			if(str[i+1]==98 || str[i+1]==99 || str[i+1]==102 || str[i+1]==110 || str[i+1]==116 )
				count++;
		}
	}
	cout << count << endl;
}
