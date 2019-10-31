#include<iostream>
using namespace std;

int main()
{
	int i;
	i = 1;
	
	while(i<=25){
		cout << "*";
		if(i%5==0)
			cout << endl;
		i = i + 1;
	}
}
