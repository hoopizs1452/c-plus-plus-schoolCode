#include<iostream>
using namespace std;

int main()
{
	int month,day;
	
	cin >> month;
	cin >> day;
	
	if( month == 1 ){
		if( day <= 20 )
			cout << "Capricorn" << endl;
		else if( day >= 21 )
			cout << "Aquarius" << endl;
	}
	else if( month == 2 ){
		if( day <= 18 )
			cout << "Aquarius" << endl;
		else if( day >= 19 )
			cout << "Pisces" << endl;
	}
	else if( month == 3 ){
		if( day <= 20 )
			cout << "Pisces" << endl;
		else if( day >= 21 )
			cout << "Aries" << endl;
	}
	else if( month == 4 ){
		if( day <= 20 )
			cout << "Aries" << endl;
		else if( day >= 21 )
			cout << "Taurus" << endl;
	}
	else if( month == 5 ){
		if( day <= 21 )
			cout << "Taurus" << endl;
		else if( day >= 22 )
			cout << "Gemini" << endl;
	}
	else if( month == 6 ){
		if( day <= 21 )
			cout << "Gemini" << endl;
		else if( month >= 22 )
			cout << "Cancer" << endl;
	}
	else if( month == 7 ){
		if( day <= 22 )
			cout << "Cancer" << endl;
		else if( day >= 23 )
			cout << "Leo" << endl;
	}
	else if( month == 8 ){
		if( day <= 23 )
			cout << "Leo" << endl;
		else if( day >= 24 )
			cout << "Virgo" << endl;
	}
	else if( month == 9 ){
		if( day <= 23 )
			cout << "Virgo" << endl;
		else if( day >= 24 )
			cout << "Libra" << endl;
	}
	else if( month == 10 ){
		if( day <= 23 )
			cout << "Libra" << endl;
		else if( day >= 24 )
			cout << "Scorpio" << endl;
	}
	else if( month == 11 ){
		if( day <= 22 )
			cout << "Scorpio" << endl;
		else if( day >= 23 )
			cout << "Sagittarius" << endl;
	}
	else if( month == 12 ){
		if( day <= 21 )
			cout << "Sagittarius" << endl;
		else if( day >= 22 )
			cout << "Capricorn" << endl;
	}
}
