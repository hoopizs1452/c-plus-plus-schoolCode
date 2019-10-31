#include<iostream>
using namespace std;
bool isFactor(int n,int m);
int noOfFactors(int n);
bool isPrime(int n);
int noOfPrimes(int n,int m);
int x,y;

int main()
{
	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << "no of primes between " << x
	<< " and " << y << " is " << noOfPrimes(x,y);
}

bool isFactor(int n,int m)
{
	if(m%n==0)
		return true;
	else
		return false;
//	return !(m%n);
}

int noOfFactors(int n)
{
	int count = 0;
	for(int i=1;i<=n;i++)
	{
		if(isFactor(i,n))
			count++;
	}
	return count;
}

bool isPrime(int n)
{
	if(noOfFactors(n)==2)
		return true;
	else
		return false;
}

int noOfPrimes(int n,int m)
{
	int count = 0;
	for(int i=n;i<=m;i++)
	{
		if(isPrime(i))
			count++;
	}
	return count;
}
