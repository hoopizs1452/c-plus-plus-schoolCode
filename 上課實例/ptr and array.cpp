#include<iostream>
using namespace std;

int main()
{
	//int a=123, b=456;
	int array[] = {5, 4, 3, 2, 1};
	int *aPtr = &array[1];
	int *bPtr = &array[2];
	
	cout << "aPtr: " << aPtr << " *aPtr: " << *aPtr << endl;
	cout << "bPtr: " << bPtr << " *bPtr: " << *bPtr << endl;
	//===
	cout << "aPtr+1: " << aPtr+1 << " *(aPtr+1): " << *(aPtr+1) << endl;
	cout << "bPtr+2: " << bPtr+2 << " *(bPtr+2): " << *(bPtr+2) << endl;
	//===
	cout << "bPtr-aPtr: " << bPtr-aPtr << endl;
}
