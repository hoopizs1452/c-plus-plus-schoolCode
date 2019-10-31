#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num1,num2,count;
	cin >> num1 >> num2;
	
	for(int i=num1; i<=num2;i++)
	{
		if(pow(i%10,3)+pow((i/10)%10,3)+pow((i/100)%10,3)==i)
		{
			cout << i << endl;
			count++;
		}
	}
	cout << "Total:" << count << endl;
}
