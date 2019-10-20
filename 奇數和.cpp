#include<iostream>
using namespace std;

int main()
{
	int a,b,total1,total2;
	cin >> a >> b;
	
	if( a % 2 == 0 )
		a = a + 1;
	if( b % 2 == 0 )
		b = b - 1;
	
	total1 = a;
	while( a < b ){
		total2 = a + 2;
		
		total1 = total1 + total2;
		
		a = a + 2;
	}
	cout << total1 << endl;
}
