#include <iostream> 
using namespace std;
bool isLeapYear(int);

int main()
{
   	int y;

   	for(int i=0;i<3;i++){
   	  	cin >> y;
	  	if (isLeapYear(y)) 
	  		cout<<"TRUE"<<endl;
	  	else 
	  		cout<<"FALSE"<<endl;
   }
   
}

bool isLeapYear(int y)
{
	
	if(y%4==0 && y%100!=0 || y%400==0)
		return true;
	else
		return false;
}
