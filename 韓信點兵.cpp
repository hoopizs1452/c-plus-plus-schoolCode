#include<iostream>
using namespace std;

int main()
{
	int a,b,c,x;
	cin >> a >> b >> c;
	
	x = 10;
	while( x <= 100 ){
		if( x % 3 == a && x % 5 == b && x % 7 == c ){
			cout << x << endl;
			return 0; 
		}
		x++;
	} 
	cout << "No answer" << endl;
 } 
