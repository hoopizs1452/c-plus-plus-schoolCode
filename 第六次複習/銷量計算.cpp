#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double prod_1,prod_2,prod_3,prod_4,prod_5;
	prod_1=prod_2=prod_3=prod_4=prod_5=0;
	
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
			
			switch(pn)
			{
				case 1:
					prod_1 += 2.98*sv;
					break;
				case 2:
					prod_2 += 4.50*sv;
					break;
				case 3:
					prod_3 += 9.98*sv;
					break;
				case 4:
					prod_4 += 4.49*sv;
					break;
				case 5:
					prod_5 += 6.87*sv;
					break;
			}
		}
	}
	cout << setprecision(2) << fixed << prod_1 << " " 
	<< prod_2 << " " << prod_3 << " " << prod_4 << " " 
	<< prod_5 << " " << prod_1+prod_2+prod_3+prod_4+prod_5 << endl;
}
