/*===================================
第一題-Factorial再現

題目：請撰寫一個遞迴函式int factorial(int n)，該函式接收一正整數n，計算並傳回n!之值

如factorial(5)則傳回120。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改

#include <iostream>
using namespace std;



int main()
{
	int number;
	
	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << factorial(number)<<endl;
	}

	return 0;
}
====================================*/

#include <iostream>
using namespace std;
int factorial(int);


int main()
{
	int number;
	
	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << factorial(number)<<endl;
	}

	return 0;
}

int factorial(int num)
{
	return (num==0 || num==1)?num:(num*factorial(num-1));
}
