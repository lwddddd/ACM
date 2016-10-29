#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num=1;
	while(true)
	{
		int a,b;
		cin>>a>>b;
		if(a==0||b==0)
		break;
		char qu[100][100]={0};
		int  an[100][100]={0};
		for(int i=0;i<a;i++)
		  for(int k=0;k<b;k++)
		  cin>>qu[i][k];
		for(int i=0;i<a;i++)
		  for(int k=0;k<b;k++)
		  {
		  	if(qu[i][k]=='*')
		  	{
		  		an[i][k]=9;
		  		if(i+1<a)
		  		  if(an[i+1][k]!=9)
		  		  an[i+1][k]++;
		  		if(i-1>=0)
		  		  if(an[i-1][k]!=9)
		  		  an[i-1][k]++;
		  		if(k+1<b)
		  		  if(an[i][k+1]!=9)
		  		  an[i][k+1]++;
		  		if(k-1>=0)
		  		  if(an[i][k-1]!=9)
		  		  an[i][k-1]++;
		  		  
		  		  
				if(i+1<a&&k+1<b)
		  		  if(an[i+1][k+1]!=9)
		  		  an[i+1][k+1]++;
		  		if(i-1>=0&&k+1<b)
		  		  if(an[i-1][k+1]!=9)
		  		  an[i-1][k+1]++;
		  		if(i+1<a&&k-1>=0)
		  		  if(an[i+1][k-1]!=9)
		  		  an[i+1][k-1]++;
		  		if(i-1>=0&&k-1>=0)
		  		  if(an[i-1][k-1]!=9)
		  		  an[i-1][k-1]++;
	
			}
		  }
		  cout<<"Field #"<<num<<":"<<endl;
		for(int i=0;i<a;i++)
		{
		
		  for(int k=0;k<b;k++)
		  {
		  	if(an[i][k]==9)
		  	cout<<'*';
		  	else 
		  	cout<<an[i][k];
		  	
		  }
	    cout<<endl;
		
		} 
		cout<<endl;          
		num++;
	}
}
