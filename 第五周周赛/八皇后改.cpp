#include<iostream>
using namespace std;
int m[8][8];
int a[9][9] = { 0 };
int max1 = 0;
void go()
{
	int mx = 0;
	for (int i = 0; i<8; i++)
		for (int j = 0; j<8; j++)
			if (m[i][j] == 1)
				mx += a[i][j];
	if (mx>max1)
		max1 = mx;

}
bool check(int row, int column)
{
	if (row == 0)
		return true;
	int i, j;

	for (int i = 0; i<row; i++)
	{
		if (m[i][column] == 1)return false;

	}


	i = row-1;
	j = column-1;
	while (i >= 0 && j >= 0)
	{
		if (m[i][j] == 1) return false;
		i--;
		j--;
	}
	i = row-1;
	j = column+1;
	while (i >= 0 && j <= 7)
	{
		if (m[i][j] == 1) return false;
		i--;
		j++;
	}
	return true;
}
void solve(int row)
{
	for (int j = 0; j<8; j++)
	{
		m[row][j] = 1;
		if (check(row, j) == true)
		{
			if (row == 7) go();
			else solve(row + 1);

		}
		m[row][j] = 0;
	}
	
}
int main()
{

	for (int i = 0; i<8; i++)
		for (int j = 0; j<8; j++)
			cin >> a[i][j];;
	solve(0);
	cout << max1;

}
