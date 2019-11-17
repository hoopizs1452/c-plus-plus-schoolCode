#include<iostream>
using namespace std;

int main()
{
	int num,count=0;
	cin >> num;
	
	while(num)
	{
		num = num / 10;
		count++;
	}
	cout << count << endl;
}
