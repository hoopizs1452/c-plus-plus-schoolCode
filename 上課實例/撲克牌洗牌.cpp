#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;
void printCard(int array[]);
void randomArray4(int array[]);
void initArray4(int array[]);

const int SIZE=52; 

int main()
{
	

     int a[SIZE];
     srand(time(NULL));
     randomArray4(a);
     printCard(a);

     system("PAUSE");
     return 0;
}




void randomArray4(int array[])
{
   int i,j,a,b;
   initArray4(array);
   for(j=0;j<=SIZE-1;j++){
     a=rand()%SIZE;

     b=array[a];
     array[a]=array[j];
     array[j]=b;
   }

}

void initArray4(int array[])
{
  int i;
  for (i=0;i<=SIZE-1;i++)
  {
     array[i]=i;
  }
}


void printCard(int array[])
{
  int i;

  cout << "Element           Value\n";
  

  for(i=0;i<=SIZE-1;i++){
  	cout<< setw(8)<<i;
  	switch(array[i]/13){
  		case 0: cout<< setw(8)<< "spade";break;
		case 1: cout<< setw(8)<< "heart";break;
		case 2: cout<< setw(8)<< "diamond";break;
		case 3: cout<< setw(8)<< "club";break;  	
	}
	
	switch(array[i]%13){
		case 12: cout<< setw(4)<< "K";break;
		case 11: cout<< setw(4)<< "Q";break;
		case 10: cout<< setw(4)<< "J";break;
		case 0: cout<< setw(4)<< "A";break;
		default: cout<< setw(4)<< array[i]%13+1;break;
	}
    cout <<endl;
  }
}

