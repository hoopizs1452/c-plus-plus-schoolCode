#include <iostream>
#include <iomanip>
using namespace std;

void barchart(int array[], int m)
{
	int arr[11]={};
	
	
	for(int i=0; i<m; i++)
	{
		if(array[i]<10 && array[i]>=0)
			arr[0]++;
		if(array[i]<20 && array[i]>=10)
			arr[1]++;
		if(array[i]<30 && array[i]>=20)
			arr[2]++;
		if(array[i]<40 && array[i]>=30)
			arr[3]++;
		if(array[i]<50 && array[i]>=40)
			arr[4]++;
		if(array[i]<60 && array[i]>=50)
			arr[5]++;
		if(array[i]<70 && array[i]>=60)
			arr[6]++;
		if(array[i]<80 && array[i]>=70)
			arr[7]++;
		if(array[i]<90 && array[i]>=80)
			arr[8]++;
		if(array[i]<100 && array[i]>=90)
			arr[9]++;
		if(array[i]==100)
			arr[10]++;
	}
	for(int j=0; j<11; j++)
	{
		for(int k=0; k<arr[j]; k++)
			cout << '*';
		cout << endl;
	}
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	barchart(score, arraySize);
}
