#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=7; i++)
	{
		for(int j=1; j<=7; j++)
			if(i-j==5||i-j==-5||i+j==3||i+j==13||((i==2||i==6)&&i==j)||((i==2||i==6||j==2||j==6)&&(i-j==4||i-j==-4)))
				cout << "-";
			else
				cout << "*";
		cout << endl;
	}
}

