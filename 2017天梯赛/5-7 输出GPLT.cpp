#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int G=0,P=0,L=0,T=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='G'||s[i]=='g')
		G++;
		if(s[i]=='P'||s[i]=='p')
		P++;
		if(s[i]=='L'||s[i]=='l')
		L++;
		if(s[i]=='T'||s[i]=='t')
		T++;
	}
	while(G!=0||P!=0||L!=0||T!=0)
	{
		if(G!=0)
		{
		cout<<'G';
		G--;
		}
		if(P!=0)
		{
			cout<<'P';
			P--;
			
		}
		if(L!=0)
		{
		cout<<'L';
		L--;
		
		}
		if(T!=0)
		{
			cout<<'T';	
			T--;
		}
	}
}
