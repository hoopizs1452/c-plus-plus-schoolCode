#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int maximum(int array[], int m)
{
	int max = 0;
	for(int i=0; i<m; i++)
	{
		if(i==0)
			max = array[i];
		else if(array[i]>max)
			max = array[i];
	}
	return max;
}

int minimum(int array[], int m)
{
	int min = array[0];
	for(int i=0; i<m; i++)
	{
		if(array[i]==0)
			min = array[i];
		else if(array[i]<min)
			min = array[i];
	}
	return min;
}

double average(int array[], int m)
{
	double avg=0.0;
	for(int i=0; i<m; i++)
	{
		avg += array[i]; 
	}
	return (avg/m);
}

int main(){
	const int arraySize=5; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	cout<<maximum(score, arraySize)<<endl;
	cout<<minimum(score, arraySize)<<endl;
	cout<<fixed<<setprecision(2)<<average(score, arraySize)<<endl;
}
