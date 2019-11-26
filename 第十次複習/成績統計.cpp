#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int score;
	int freq[5]={};
	int i=1;
	
	while(i!=-1)
	{
		cin >> score;
		
		
		if(score >= 90 && score <= 100)
			freq[0]++;
		else if(score >= 80 && score <= 89)
			freq[1]++;
		else if(score >= 70 && score <= 79)
			freq[2]++;
		else if(score >= 60 && score <= 69)
			freq[3]++;
		else if(score <= 59)
			freq[4]++;
		i = score;
	}
	freq[4] -= 1;
	cout << "A:" << freq[0] << endl;
	cout << "B:" << freq[1] << endl;
	cout << "C:" << freq[2] << endl;
	cout << "D:" << freq[3] << endl;
	cout << "E:" << freq[4] << endl;
} 
 
