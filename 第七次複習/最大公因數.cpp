#include<iostream>
using namespace std;
int gcd(int, int);

int main()
{
   int a;
   int b;

   for ( int j = 1; j <= 5; j++ ) 
   {
      cin >> a >> b;
      cout <<  gcd( a, b ) << endl;
   }
}

int gcd(int n, int m)
{
	int r=0;
	
	while(n!=0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
