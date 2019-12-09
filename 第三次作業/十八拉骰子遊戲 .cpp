#include<iostream>
using namespace std;

int main()
{
	int roll1=0,roll2=0,roll3=0,roll4=0,roll5=0,roll6=0;
	int dice[4]={};
	
	for(int i=0; i<4; i++)
	{
		cin >> dice[i];
	}
	
	int sum=dice[0]+dice[1]+dice[2]+dice[3];
	
	for(int j=0; j<4; j++)
	{
		if(dice[j]==1)
			roll1 += 1;
		if(dice[j]==2)
			roll2 += 1;
		if(dice[j]==3)
			roll3 += 1;
		if(dice[j]==4)
			roll4 += 1;
		if(dice[j]==5)
			roll5 += 1;
		if(dice[j]==6)
			roll6 += 1;
	}
	
	if(roll1==4 || roll2 ==4 || roll3==4 || roll4==4 || roll5==4 || roll6==4)
		cout << "WIN";
	else if(roll1==3 || roll2==3 || roll3==3 || roll4==3 || roll5==3 || roll6==3)
		cout << "LOSE";
	else if(roll1==1 || roll2==1 || roll3==1 || roll4==1 || roll5==1 || roll6==1)
		cout << "LOSE";
	else if(roll1==2)
	{
		if(sum-2==3)
			cout << "BG R";
		else if(sum-2==12)
			cout << "EIGHTEEN R";
		else if(sum-2!=12 && sum-2!=3)
			cout << sum-2;
	}
	
	else if(roll2==2)
	{
		if(sum-4==3)
			cout << "BG R";
		else if(sum-4==12)
			cout << "EIGHTEEN R";
		else if(sum-4!=12 && sum-4!=3)
			cout << sum-4;
	}
	
	else if(roll3==2)
	{
		if(sum-6==3)
			cout << "BG R";
		else if(sum-6==12)
			cout << "EIGHTEEN R";
		else if(sum-6!=12 && sum-6!=3)
			cout << sum-6;
	}
	
	else if(roll4==2)
	{
		if(sum-8==3)
			cout << "BG R";
		else if(sum-8==12)
			cout << "EIGHTEEN R";
		else if(sum-8!=12 && sum-8!=3)
			cout << sum-8;
	}
	
	else if(roll5==2)
	{
		if(sum-10==3)
			cout << "BG R";
		else if(sum-10==12)
			cout << "EIGHTEEN R";
		else if(sum-10!=12 && sum-10!=3)
			cout << sum-10;
	}
	
	else if(roll6==2)
	{
		if(sum-12==3)
			cout << "BG R";
		else if(sum-12==12)
			cout << "EIGHTEEN R";
		else if(sum-12!=12 && sum-12!=3)
			cout << sum-12;
	}
} 
