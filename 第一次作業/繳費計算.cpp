#include<iostream>  
using namespace std; 

int main()
{
	int startHour, startMinute, endHour, endMinute;

	cin >> startHour >> startMinute >> endHour >> endMinute;

	if(((endHour - startHour) * 60) + (endMinute - startMinute) > 120)
		cout << 100 + (((((endHour - startHour) * 60) + (endMinute - startMinute)) / 30) - 4) * 50 << endl;
	else if(((endHour - startHour) * 60) + (endMinute - startMinute) > 60)
		cout << 40 + (((((endHour - startHour) * 60) + (endMinute - startMinute)) / 30) - 2) * 30 << endl;
	else
		cout << ((((endHour - startHour) * 60) + (endMinute - startMinute)) / 30) * 20 << endl;
}
