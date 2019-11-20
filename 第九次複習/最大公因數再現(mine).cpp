/*=====================================
第二題-最大公因數再現

題目：請撰寫一個遞迴函式int gcd(int n, int m)，該函式接兩正整數n、m，計算兩數最大公因數之值。

如gcd(12, 18)則傳回6。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改

#include <iostream>
using namespace std;



int main()
{
	int num_1, num_2;

	for(int i=0; i<10; i++)
	{
		cin >> num_1 >> num_2;
		cout << gcd(num_1, num_2) << endl;
	}

	return 0;
}
======================================*/

#include <iostream>
using namespace std;

int gcd(int n, int m)
{
	return ((n>m)?(n==0)?m:(n%m):((n==0)?m:(m%n)));
}

int main()
{
	int num_1, num_2;

	for(int i=0; i<10; i++)
	{
		cin >> num_1 >> num_2;
		cout << gcd(num_1, num_2) << endl;
	}

	return 0;
}
