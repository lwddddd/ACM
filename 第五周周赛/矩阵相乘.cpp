#include<iostream>
using namespace std;
int main()
{
	int ai, aj;
	cin >> ai >> aj;
	int a[150][150] = { 0 };
	for (int i = 0; i<ai; i++)
		for (int j = 0; j<aj; j++)
			cin >> a[i][j];
	int bi, bj;
	cin >> bi >> bj;
	int b[150][150] = { 0 };
	for (int i = 0; i<bi; i++)
		for (int j = 0; j<bj; j++)
			cin >> b[i][j];
	int an[150][150] = { 0 };
	for (int i = 0; i<ai; i++)
		for (int j = 0; j<bj; j++)
		{
		int p = 0;
		for (int q = 0; q<aj; q++)
			p = p + a[i][q] * b[q][j];
		an[i][j] = p;
		}
	for (int i = 0; i<ai; i++)
	{
		for (int j = 0; j<bj; j++)
			cout << an[i][j] << " ";
		cout << endl;
	}
	return 0;
	 
}
