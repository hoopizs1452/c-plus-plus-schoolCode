#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int l=0,s=0;
	cin >> str;
	
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]>=65 && str[i]<=90)
			l++;
		else if(str[i]>=97 && str[i]<=122)
			s++;
	}
	cout << l << " " << s << endl;
}
