#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void printBarChart(int frequency[])
{
	for(int i=0;i<11;i++)
	{
		if(i==0)
			cout<<setw(6)<<"0-9:";
		else if(i==10)
			cout<<setw(6)<<"100:";
		else
			cout<<i*10<<"-"<<(i*10)+9<<":";
		for(int j=0;j<frequency[i];j++)
			cout<<'*';
		cout<<endl;	
	}
}

void randomArray(int arr[], int size)
{
	for(int i=0;i<size;i++){
		arr[i]=1+rand()%100;
	}
}

int main(){
	const int arraySize=60;
	int n[arraySize]={};
	int freq[11]={};
	
	srand(10001);
	randomArray(n, arraySize);
	
	for(int i=0;i<arraySize;i++){
		++freq[n[i]/10];
	}
	
	cout<<setw(8)<<"i";
	for(int i=0;i<11;i++){
		cout<<setw(6)<<i;
	}
	cout<<endl;
	cout<<setw(8)<<"freq[i]";
	for(int i=0;i<11;i++){
		cout<<setw(6)<<freq[i];
	}
	cout<<endl;
	
	printBarChart(freq);
}

