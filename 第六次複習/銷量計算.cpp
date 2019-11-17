#include<iostream>
using namespace std;
double secondType(int);

int main()
{
	double total=0,money=0;
	
	while(1)
	{
		int pn;
		cin >> pn;
		
		if(pn == -1)
			break;
		else
		{
			double sv;
			cin >> sv;
			
			money = secondType(pn) * sv;
			cout << money << " ";
			total += money;
		}
	}
	cout << total << endl;
}

double secondType(int num)
{
	double m;
	
	switch(num)
	{
		case 1:
			m = 2.98;
			break;
		case 2:
			m = 4.50;
			break;
		case 3:
			m = 9.98;
			break;
		case 4:
			m = 4.49;
			break;
		case 5:
			m = 6.87;
			break;
	}
	return m;
}
