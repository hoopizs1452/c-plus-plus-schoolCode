#include<iostream>
#include<cmath>
using namespace std;
int sqrfloor(int);

int main()
{
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
}

int sqrfloor(int n)
{
	int m,total=0;
	
	m = sqrt(n);
	total = m*m;
	return total;
}
