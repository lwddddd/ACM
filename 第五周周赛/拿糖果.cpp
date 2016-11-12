#include<iostream>
#include<cmath>
using namespace std;
bool sushu(int n)
{
	if (n == 0 || n == 1)
		return false;
	bool a = true;
	int k = sqrt(n);
	for (int i = 2; i <= k; i++)
	{

		if (n%i == 0)
		{
			a = false;
			break;
		}
	}
	return a;

}
int main()
{
	int an = 0;
	int n;
	cin >> n;
	an = n;
	for (int i = sqrt(n); i>0; i--)
	{
		if (i == (double)sqrt(n))
			continue;
		if (i == 0)
			break;
		if (sushu(i) && n%i == 0)
		{
			n = n - i;
			i = sqrt(n)+1;
		}
	}
	cout << an - n;
}
