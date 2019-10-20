#include<iostream>
using namespace std;

int main()
{
	char pn,ch;   //pn:+,-;ch:字母 
	int pan,num,i=1;  //pan:平移位數;num:一串數字
	cin >> pn >> pan >> ch >> num;
	
	if((int)ch>=65 or (int)ch<=90)
	{
		if((int)pn==43)
			ch = (int)ch + pan;
		if((int)pn==45)
			ch = (int)ch - pan;
		if(ch<65)
			ch = ch + 25 + 1;
		if(ch>90)
			ch = ch - 25 - 1;
		while(num/10!=0)
		{
			num /= 10;
			i++;
		}
		cout << (char)ch << i << endl;
	}
	else
		cout << "input error" << endl;
}
