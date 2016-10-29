// 方便记忆的电话号码.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int count1[1000][10000];
//A, B, C -> 2
//D, E, F -> 3
//G, H, I -> 4
//J, K, L -> 5
//M, N, O -> 6
//P, R, S -> 7
//T, U, V -> 8
//W, X, Y -> 9


int _tmain(int argc, _TCHAR* argv[])
{
	//int count[1000][10000] ;
	
	int ch[200] = { 0 };
	ch['A'] = 2;
	ch['B'] = 2;
	ch['C'] = 2;
	ch['D'] = 3;
	ch['E'] = 3;
	ch['F'] = 3;
	ch['G'] = 4;
	ch['H'] = 4;
	ch['I'] = 4;
	ch['J'] = 5;
	ch['K'] = 5;
	ch['L'] = 5;
	ch['M'] = 6;
	ch['N'] = 6;
	ch['O'] = 6;
	ch['P'] = 7;
	ch['R'] = 7;
	ch['S'] = 7;
	ch['T'] = 8;
	ch['U'] = 8;
	ch['V'] = 8;
	ch['W'] = 9;
	ch['X'] = 9;
	ch['Y'] = 9;
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i< n; i++)
	{
		int i1 = 0, i2 = 0;
		char str[205] = { 0 }; int k = 0;
		cin.getline(str,204);
		char num[8] = { 0 }; int j = 0;
		while (str[k] != 0)
		{
			if (str[k] == '-')
			{
				k++;
				continue;		
			}
			if (str[k] >= 65 && str[k] <= 90)
			{
				num[j] = ch[str[k]]+48;
				j++;
				k++;
				continue;
			}
			else
			{
				num[j] = str[k];
				j++;
				k++;
				continue;
			}

		}
		i1 = (num[0] - 48) * 100 + (num[1] - 48) * 10 + (num[2]) - 48;
		i2 = (num[3] - 48) * 1000 + (num[4] - 48) * 100 + (num[5] - 48) * 10 + (num[6] - 48);
		count1[i1][i2]++;
		
	}
	
	bool Out = true;
	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 10000; j++) {
			if (count1[i][j] > 1) {
				printf("%.3d-%.4d %d\n", i, j, count1[i][j]);
				Out = false;
			}
		}
	}

	if (Out) printf("No duplicates.");
	return 0;

}

