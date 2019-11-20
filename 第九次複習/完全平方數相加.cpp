/*==================================
第五題-完全平方數相加

題目：請撰寫一個遞迴函式int sumSquareNumber(int n)，該函式接一正整數n，

計算完全平方數至第n項的總和，如 1+4+9+16+....+n*n 。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改

#include <iostream>
using namespace std;



int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << sumSquareNumber(number) << endl;
	}

	return 0;
}
===================================*/

#include <iostream>
using namespace std;

int sumSquareNumber(int n)
{
	return (n==1)?1:((n*n)+sumSquareNumber(n-1));
}

int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << sumSquareNumber(number) << endl;
	}

	return 0;
}
