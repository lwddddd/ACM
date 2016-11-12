#include<iostream>
using namespace std;
int max1 = 0;
char a[1000] = { 0 };
char b[1000] = { 0 };
void di(int n, int ai, int bi)
{
	while (a[ai] != 0)
	{
		int c = bi;
		while (b[c] != 0)
		{
			if (b[c] == a[ai])
			{
				di(n, ai+1, bi);
				n++;
				bi = c + 1;
				break;
			}
			c++;
		}
		ai++;
	}
	if (n>max1)
		max1 = n;

}
int main()
{
	while (cin >> a >> b)
	{
		di(0, 0, 0);
	}
	cout << max1;
}
