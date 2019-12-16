#include <iostream>
using namespace std;
int maximum(int array[], int size);
int max_and_second(int array[], int size, int *maxValue, int* secondValue);
int main(){
	int a[]={121, 88, 75, 34, 121,
			100, 147, 60, 59, 99};
	int largest, second_largest;	
	cout<<maximum(a, 10);
	max_and_second(a, 10, &largest, &second_largest);
	
	cout << "The largest: " << largest;
	cout << "The second largest: " << second_largest;
}

int maximum(int array[], int size)
{
	int max=0;
	
	for(int i=0; i<size; i++)
	{
		if(i==0)
			max = array[i];
		else if(array[i]>max)
			max = array[i];
	}
	return max;
}

int max_and_second(int array[], int size, int *maxValue, int* secondValue)
{
	int max,second_max;
	
	if(array[0]>=array[1])
	{
		max = array[0];
		second_max = array[1]; 
	}
	else
	{
		max = array[1];
		second_max = array[0];
	}
	
	for(int i=2; i<size; i++)
	{
		if(array[i]>max)
		{
			second_max = max;
			max = array[i];
		}
		else if(array[i]>second_max)
		{
			second_max = array[i];
		}
	}
	
	*maxValue = max;
	*secondValue = second_max;
}
