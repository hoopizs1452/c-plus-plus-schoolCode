#include<iostream>
using namespace std;
int square(int);

int main()
{
  int side;
  cin>>side;
  square(side);
}

int square(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
			cout << "*";
			cout << endl;
	}
}
