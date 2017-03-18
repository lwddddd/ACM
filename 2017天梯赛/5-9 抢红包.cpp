#include<iostream>
#include<iomanip>
#include <bits/stdc++.h>
using namespace std;
struct Man{
	int maney;
	int id;
	int num;
	
};
int cmd(Man a,Man b)
{
    if(a.maney != b.maney)
        return a.maney > b.maney;
    else if(a.num != b.num)
        return a.num > b.num ;
    else if(a.id != b.id)
        return a.id < b.id ;
}
int main()
{
int n=0;
cin>>n;
Man man[10005];
for(int i=1;i<n;i++)
{
	man[i].id=i;
	man[i].maney=0;
	man[i].num=0;
	
}
for(int i=1;i<=n;i++)
{
	int num;
	cin>>num;
	for(int j=1;j<=num;j++)
	{
		int id,money;
		cin>>id>>money;
		man[id].id=id;
		man[id].maney+=money;
		man[id].num++;
		man[i].maney-=money;
	}
}

sort(man+1,man+n+1,cmd);
	for(int i=1;i<=n;i++)
	{
		cout<<fixed<<man[i].id<<" "<<setprecision(2)<<(double)man[i].maney/100<<endl;
		
	}
} 
