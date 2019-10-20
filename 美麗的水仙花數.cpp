#include<iostream>
using namespace std;

int main()
{
	int min,max,n=0;
	cin >> min >> max;
	
	while(min<=max){
		if(((min/100)*(min/100)*(min/100))+((min%100/10)*(min%100/10)*(min%100/10))+((min%100%10)*(min%100%10)*(min%100%10))==min){
			cout << min << endl;
			n++;
		}
		min++;		
	}
	cout << "Total: " << n << endl;
}
