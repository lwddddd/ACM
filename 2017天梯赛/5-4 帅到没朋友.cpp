#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int num;
	int id[100000]={0};
	cin>>num;
	for(int i=0;i<num;i++)
	{
		int q=0;
		cin>>q;
		for(int j=0;j<q;j++)
	{
		int man;
		cin>>man;
		if(q!=1)
		id[man]=1;
	}		
	}
	int a;
	bool an=false;
	cin>>a;
	string answer[100000];
	int number=0;
	for(int i=0;i<a;i++)
	{
		string man;
		cin>>man;
		int inman=atoi(man.c_str());
		if(id[inman]==0)
		{
		id[inman]=1;
		answer[number]=man;
		number++;
		an=true;
		}
	}
	if(an==false)
	cout<<"No one is handsome";
	else{
		
		for(int i=0;i<number;i++)
		if(i!=number-1)
		cout<<answer[i]<<" ";
		else
		cout<<answer[i];
	}
	
}
