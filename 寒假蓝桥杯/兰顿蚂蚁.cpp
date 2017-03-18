#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>m>>n;
	int tu[2000][100]={0};
	for(int i=0;i<m;i++)
	  for(int j=0;j<n;j++)
	  cin>>tu[i][j];
	int x,y,t,k;
	char s;
	cin>>x>>y>>s>>k;
	if(s=='U')//UDLR
	t=0;
	if(s=='R')
	t=1;
	if(s=='D')
	t=2;
	if(s=='L')
	t=3;
	for(int i=0;i<k;i++)
	{
		if(tu[x][y]==1)
		{
			t=(t+1)%4;
			tu[x][y]=0;
			if(t==0)
			{
			if(x-1!=-1)
			x--;
			}
			if(t==1)
			{
				if(y+1!=n)
				y++;					
			}
			if(t==2)
			{
				if(x+1!=m)
				x++;
			}
			if(t==3)
			{
				if(y-1!=-1)
				y--;				
			}
						
		}
		else
		{
			t=(t-1);
			if(t==-1)
			t=3;
			tu[x][y]=1;
			if(t==0)
			{
			if(x-1!=0-1)
			x--;				
			}
			if(t==1)
			{
				if(y+1!=n)
				y++;					
			}
			if(t==2)
			{
				if(x+1!=m)
				x++;
			}
			if(t==3)
			{
				if(y-1!=0-1)
				y--;				
			}						
		}
		//	cout<<x<<" "<<y<<" "<<t<<endl;	
	}
	cout<<x<<" "<<y;
	
}
