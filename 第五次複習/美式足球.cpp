#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cin >> num;
	
	for(i=0;i<num;i++)
	{
		int sum,diff,team1,team2;
		cin >> sum >> diff;
		
		team1 = (sum+diff) / 2;
		team2 = (sum-diff) / 2;
		
		if(team1<0 || team2<0 || (sum+diff)%2!=0 || (sum-diff)%2!=0)
			cout << "impossible" << endl;
		else if(team1 < team2)
			cout << team2 << " " << team1 << endl;
		else
			cout << team1 << " " << team2 << endl;
	}
}
