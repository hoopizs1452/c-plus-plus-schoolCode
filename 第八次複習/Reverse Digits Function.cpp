#include<iostream>
using namespace std;
int reverseDigits(int);

int main()
{
   int number; 

   for(int i=0;i<3;i++){
	  cin >> number;
	  cout << reverseDigits( number ) << endl;
   }
   
}

int reverseDigits(int num)
{
	int a,b=0;
	
	while(num>0)
	{
		b *= 10;
		a = num % 10;
		b += a;
		num /= 10;
	}
	return b;
}
