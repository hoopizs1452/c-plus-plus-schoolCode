#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]>=97 && str[i]<=122)
			str[i] -= 32;
	}
	cout << str;
}
