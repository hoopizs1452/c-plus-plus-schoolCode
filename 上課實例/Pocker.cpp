#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;
void printCard(int array[]);
void randomArray4(int array[]);
void initArray4(int array[]);
void printCard_v2(int array[], int start, int length);
void sortCard(int data[], int size);

const int SIZE=52; 

int main()
{
     int a[SIZE];
     srand(time(NULL));
     //initArray1(a);
     randomArray4(a);
//     sortCard(a, 13);
     for(int i=0; i<4; i++)
     {
//     	sortCard(a+i*13, 13);
		sortCard(&a[13*i], 13);
     	cout << "Player " << i+1 << ":";
     	printCard_v2(a, i*13, 13);
     }

     system("PAUSE");
     return 0;
}

void sortCard(int data[], int size)
{
	for ( int next = 1; next < size; next++ )
   {
      int insert = data[ next ];
      
      int moveItem = next;
	  
      while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
      {
         data[ moveItem ] = data[ moveItem - 1 ];
         moveItem--;
      }
   
      data[ moveItem ] = insert;
   }
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

void printCard_v2(int array[], int start, int length)
{
  int i;

  //cout << "Element           Value\n";
  

  for(i=start;i<start+length;i++){
  //	cout<< setw(8)<<i;
  	switch(array[i]/13){
  		case 0: cout<< setw(4)<< "\06";break;
		case 1: cout<< setw(4)<< "\03";break;
		case 2: cout<< setw(4)<< "\04";break;
		case 3: cout<< setw(4)<< "\05";break;  	
	}
	
	switch(array[i]%13){
		case 12: cout<< setw(2)<< "K";break;
		case 11: cout<< setw(2)<< "Q";break;
		case 10: cout<< setw(2)<< "J";break;
		case 0: cout<< setw(2)<< "A";break;
		default: cout<< setw(2)<< array[i]%13+1;break;
	}
    //cout << setw(8) << array[i]%13;
    cout <<" ";
  }
  cout <<endl;
}

void printCard(int array[])
{
  int i;

  cout << "Element           Value\n";
  
  for(i=0;i<=SIZE-1;i++){
  	cout<< setw(8)<<i;
  	switch(array[i]/13){
  		case 0: cout<< setw(8)<< "\03";break;
		case 1: cout<< setw(8)<< "\04";break;
		case 2: cout<< setw(8)<< "\05";break;
		case 3: cout<< setw(8)<< "\06";break;  	
	}
	
	switch(array[i]%13){
		case 12: cout<< setw(2)<< "K";break;
		case 11: cout<< setw(2)<< "Q";break;
		case 10: cout<< setw(2)<< "J";break;
		case 0: cout<< setw(2)<< "A";break;
		default: cout<< setw(2)<< array[i]%13+1;break;
	}
    //cout << setw(8) << array[i]%13;
    cout <<endl;
  }
}
