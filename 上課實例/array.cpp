#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(){
	const int arraySize=10;
	int n[arraySize]={};
	
	srand(10001);
	for(int i=0;i<arraySize;i++){
		n[i]=1+rand()%100;
	}

	cout<<setw(8)<<"index";
	for(int i=0;i<arraySize;i++){
		cout<<setw(6)<<i;
	}
	cout<<endl;
	cout<<setw(8)<<"value";
	for(int i=0;i<arraySize;i++){
		cout<<setw(6)<<n[i];
	}
	cout<<endl;
}

