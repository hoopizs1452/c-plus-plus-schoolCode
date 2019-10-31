#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,i;
	double pi = 0.0,denom = 1.0;
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			pi += 4.0 / denom;
		else
			pi -= 4.0 / denom;
			
			denom += 2;
	}
	cout << fixed << setprecision(8) << pi << endl;
}
