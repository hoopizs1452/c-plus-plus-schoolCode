#include<iostream>
using namespace std;
int secondType(int);

int main()
{
	int num,a,b,c,d,e,f,total=0;
	cin >> num;
	
	a = num / 100000;
	b = num % 100000 / 10000;
	c = num % 100000 % 10000 / 1000;
	d = num % 100000 % 10000 % 1000 / 100;
	e = num % 100000 % 10000 % 1000 % 100 / 10;
	f = num % 100000 % 10000 % 1000 % 100 % 10;
	
	total = secondType(a) + secondType(b) + secondType(c) + secondType(d) + secondType(e) + secondType(f);
	
	cout << total << endl;
 } 
 
 int secondType(int n)
 {
 	int m;
 	switch(n)
 	{
 		case 0:
 			m = 99;
 			break;
 		case 1:
 			m = 88;
 			break;
 		case 2:
 			m = 77;
 			break;
 		case 3:
 			m = 66;
 			break;
 		case 4:
 			m = 55;
 			break;
 		case 5:
 			m = 44;
 			break;
 		case 6:
 			m = 33;
 			break;
 		case 7:
 			m = 22;
 			break;
 		case 8:
 			m = 11;
 			break;
 		default:
 			m = 0;
 			break;
	 }
	 return m;
 }
