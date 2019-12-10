#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;

int sumOfElements(int arr[][columns], int tl_r, int tl_c, int dr_r, int dr_c)
{
	int total = 0;
	for(int i=tl_r; i<=dr_r; i++)
	{
		for(int j=tl_c; j<=dr_c; j++)
		{
			total += arr[i][j];
		}
	}
	return total;
}

int main(){
	
	
	int array[rows][columns];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	int max = array[0][0];
	for(int a=0; a<4; a++)
	{
		for(int b=0; b<4; b++)
		{
			for(int c=0; c<4; c++)
			{
				for(int d=0; d<4; d++)
				{
					int g = sumOfElements(array, a, c, b, d);
					if(g>max)
						max = g;
				}
			}
		}
	}
	cout << max << endl;
}
