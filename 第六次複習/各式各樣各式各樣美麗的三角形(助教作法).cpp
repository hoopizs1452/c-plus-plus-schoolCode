#include<iostream>
using namespace std;

void lowerLeft(int height)
{
	for(int i=1; i<=height; i++)
	{
		for(int j=1; j<=height; j++)
		{
			if(i>=j)
				cout << "*";
			else
				cout << "-";
		}
		cout << "\n";
	}
}

void upperLeft(int height)
{
	for(int i=1; i<=height; i++)
	{
		for(int j=1; j<=height; j++)
		{
			if(i+j<=height+1)
				cout << "*";
			else
				cout << "-";
		}
		cout << "\n";
	}
}

void lowerRight(int height)
{
	for(int i=1; i<=height; i++)
	{
		for(int j=1; j<=height; j++)
		{
			if(i+j>=height+1)
				cout << "*";
			else
				cout << "-";
		}
		cout << "\n";
	}
}

void upperRight(int height)
{
	for(int i=1; i<=height; i++)
	{
		for(int j=1; j<=height; j++)
		{
			if(i<=j)
				cout << "*";
			else
				cout << "-"; 
		}
		cout << "\n";
	}
}

void outputTriangle(int number, int height)
{
	if(number==1)
		lowerLeft(height);
	else if(number==2)
		upperLeft(height);
	else if(number==3)
		lowerRight(height);
	else
		upperRight(height);
}

int main()
{
	int number,height;
	cin >> number >> height;
	outputTriangle(number, height);
}

