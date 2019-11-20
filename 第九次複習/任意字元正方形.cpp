/*====================================
第六題-任意字元正方形

題目：請寫出一個函式void square(int side, char fillCharacter)，該函式在螢幕的左邊用字元參數fillCharacter畫出一個實心正方形，

其邊長是由整數參數side指定。例如，如果使用者輸入邊長5，而字元為’#’，則會印出以下圖形：

#####
#####
#####
#####
#####

※ 請配合main函式執行，main函式請勿修改

#include <iostream>
using namespace std;

void square(int side, char fillCharacter)
{
    
}

int main()
{
	int side;
	char fillCharacter;

	cin >> side >> fillCharacter;
	square(side, fillCharacter);
}
====================================*/

#include <iostream>
using namespace std;

void square(int side, char fillCharacter)
{
    for(int i=1; i<=side; i++)
    {
    	for(int j=1; j<=side; j++)
    	{
    		cout << fillCharacter;
    	}
    	cout << endl;
    }
}

int main()
{
	int side;
	char fillCharacter;

	cin >> side >> fillCharacter;
	square(side, fillCharacter);
}
