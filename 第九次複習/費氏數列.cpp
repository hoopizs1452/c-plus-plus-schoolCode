/*=============================
第三題-費氏數列

題目：0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233……每一項皆為前兩項相加的數列稱為費氏數列，

請撰寫一個遞迴函式int fibonacci(int n)，該函式接一正整數n，印出費氏數列對應第n項之值。

如fibonacci(10)則傳回34。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改

#include <iostream>
using namespace std;


int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << fibonacci(number) << endl;
	}

	return 0;
}
==============================*/

#include <iostream>
using namespace std;

int fibonacci(int n)
{
	return (n==1||n==2)?(n-1):(fibonacci(n-1)+fibonacci(n-2));
	
}

int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << fibonacci(number) << endl;
	}

	return 0;
}
