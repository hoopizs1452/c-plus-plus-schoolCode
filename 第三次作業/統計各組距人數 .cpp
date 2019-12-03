#include <iostream>
#include <iomanip>
using namespace std;

void distribution(int array[], int m)
{
	int arr[11]={};
	
	
	for(int i=0; i<m; i++)
	{
		if(array[i]/10<10 && array[i]/10>=0)
			arr[0]++;
		if(array[i]/10<20 && array[i]/10>=10)
			arr[1]++;
		if(array[i]/10<30 && array[i]/10>=20)
			arr[2]++;
		if(array[i]/10<40 && array[i]/10>=30)
			arr[3]++;
		if(array[i]/10<50 && array[i]/10>=40)
			arr[4]++;
		if(array[i]/10<60 && array[i]/10>=50)
			arr[5]++;
		if(array[i]/10<70 && array[i]/10>=60)
			arr[6]++;
		if(array[i]/10<80 && array[i]/10>=70)
			arr[7]++;
		if(array[i]/10<90 && array[i]/10>=80)
			arr[8]++;
		if(array[i]/10<100 && array[i]/10>=90)
			arr[9]++;
		if(array[i]/10==100)
			arr[10]++;
	}
	cout << arr[11];
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	distribution(score, arraySize);
}
