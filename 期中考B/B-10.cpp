#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=7; i++)
	{
		for(int j=1; j<=7; j++)
			if(((i==3||i==5)&&i==j)||((i-j==2||i-j==-2)&&(i==5||i==3)&&(j==5||j==3))||((i-j==1||i-j==-1)&&(i==3||i==4||i==5)&&(j==3||j==4||j==5)))
				cout << "-";
			else
				cout << "*";
		cout << endl;		
	}
}

