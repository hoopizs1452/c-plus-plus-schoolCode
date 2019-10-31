#include <iostream>
using namespace std;
int gcd(int m,int n);

int main()
{
	int a;
   	int b;
   	cin >> a >> b;
	cout <<  (a*b)/gcd( a, b ) << endl;

}

int gcd(int m,int n)
{
        int t = 1;
        while(t != 0)
        {
                t=m%n;
                m=n;
                n=t;
        }
        return m;
}
