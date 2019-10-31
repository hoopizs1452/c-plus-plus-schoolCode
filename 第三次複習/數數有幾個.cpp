#include<iostream>
using namespace std;

int main()
{
	int num;
	int n = 1;
	
	cin >> num;
	
	if( num == 0 )
		cout << "0" << endl;
	else
		while( num / 10 != 0 ){
			num = num / 10;
			n = n + 1;
		}
		cout << n << endl;
}
