/*================================
第四題-次方再現

題目：請撰寫一個遞迴函式int power(int base, int exp)，

該函式接兩正整數base、exp，計算次方之值。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改

#include <iostream>
using namespace std;


int main()
{
	int base, exp;

	for(int i=0; i<10; i++)
	{
		cin >> base >> exp;
		cout << power(base, exp) << endl;
	}

	return 0;
}
================================*/

#include <iostream>
using namespace std;

int power(int n, int m)
{
	return (m==0)?1:(n*power(n, m-1));
}

int main()
{
	int base, exp;

	for(int i=0; i<10; i++)
	{
		cin >> base >> exp;
		cout << power(base, exp) << endl;
	}

	return 0;
}
