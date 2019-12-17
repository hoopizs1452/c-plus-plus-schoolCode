#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr);

int main(){
	int max,min;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<max<<" "<<min<<endl;
//	system("PAUSE");
}

void maxmin(int a,int b,int c,int *maxPtr,int *minPtr)
{
	int max = 0;
	int min = 100;
	int array[3] = {a, b, c};
	
	for(int i=0; i<3; i++)
	{
		if(array[i]>max)
			max = array[i];
		if(array[i]<min)
			min = array[i];
	}
	
	*maxPtr = max;
	*minPtr = min;
}
