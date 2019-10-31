#include<iostream>
using namespace std;

int main()
{
	int x,i,max;
	
	i = 1;
	while( i <= 10 ){
		
		cin >> x;
		
		if( i == 1 )
			max = x;
		else if( x > max )
			max = x;
		i = i + 1;
	}
	cout << max << endl;
}
