#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int p = 0; p<n; p++)
	{
		bool an = false;
		int dao[105] = { 0 };
		int dui[1000] = { 0 };
		int low = 0, high = 0;
		int size, src, des;
		int tu[105][105] = { 0 };
		cin >> size >> src >> des;
		src--;
		des--;
		for (int i = 0; i<size; i++)
			for (int j = 0; j<size; j++)
				cin >> tu[i][j];
		dui[high] = src;
		high++;
		dao[src] = 1;
		while (low != high)
		{
			int i = dui[low];
			for (int j = 0; j<size; j++)
				if (tu[i][j] == 1 && dao[j] == 0)
				{
				if (j == des)
				{
					an = true;
					break;
				}
				dui[high] = j;
				high++;
				dao[j] = 1;
				}
			low++;
			if (an == true)
			{
				break;
			}
		}
	if(an==true)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
}
