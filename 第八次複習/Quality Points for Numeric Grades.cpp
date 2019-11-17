#include <iostream>
using namespace std;
int qualityPoints(int);

int main()
{
   int average; 

   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cin >> average;
      cout << qualityPoints( average ) << endl;
   } 

   cout << endl;
}

int qualityPoints(int n)
{
	int m;
	
	if(n<=100 && n>=90)
		m = 4;
	else if(n<=89 && n>=80)
		m = 3;
	else if(n<=79 && n>=70)
		m = 2;
	else if(n<=69 && n>=60)
		m = 1;
	else
		m = 0;
		
	return m;
}
