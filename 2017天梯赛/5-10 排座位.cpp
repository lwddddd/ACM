#include<iostream>
using namespace std;
struct guanxi{
	int a;
	int b;
	int c;
};
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	guanxi guanxi[10000];
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a<b)
		swap(a,b);
		guanxi[i].a=a;
		guanxi[i].b=b;
		guanxi[i].c=c;		
	}
	for(int ss=0;ss<k;ss++)
	{
		int p=0;
		int pp=0;
		int d=0; 
		int a,b;
		cin>>a>>b;
		if(a<b)
		swap(a,b);
		//²éÕÒaµÄÅóÓÑ ºÍÅóÓÑµÄÅóÓÑ 
		int xuan[105]={0};
		int dui[105]={0},ding=0;
		for(int i=0;i<m;i++)
		{
		if(guanxi[i].a==a&&guanxi[i].b==b&&guanxi[i].c==1)
		{
			p=1;
			break;
		}
		if(guanxi[i].a==a&&guanxi[i].b==b&&guanxi[i].c==-1)
		d=1;
		if(guanxi[i].a==a&&guanxi[i].c==1)
		{
			dui[ding]=guanxi[i].b;
			xuan[guanxi[i].b]=1;
			ding++;
		}
		if(guanxi[i].b==a&&guanxi[i].c==1)
		{
			dui[ding]=guanxi[i].a;
			xuan[guanxi[i].a]=1;
			ding++;	
		}
		}
		
		int zhan=0;
		while(zhan!=ding)
		{
			int tamp=dui[zhan];
			for(int i=0;i<m;i++)
			{
			if(guanxi[i].a==tamp&&guanxi[i].c==1&&xuan[guanxi[i].b]==0)
		       {
		     	dui[ding]=guanxi[i].b;
		    	xuan[guanxi[i].b]=1;
			    ding++;
			    if(guanxi[i].b==b)
			    {
			    	pp=1;
			    	break;
				}
		        }
		    if(guanxi[i].b==tamp&&guanxi[i].c==1&&xuan[guanxi[i].a]==0)
		         {
		      	dui[ding]=guanxi[i].a;
			    xuan[guanxi[i].a]=1;
			    ding++;	
			    if(guanxi[i].b==b)
			    {
			    	pp=1;
			    	break;
				}
		       }
			}
			zhan++;
			if(pp=1)
			break;
		}
		if(d==1&&pp==0)
		cout<<"No way"<<endl;
		else
		if(p==1)
		cout<<"No problem"<<endl;
		else
		if(d==1&&pp==1)
		cout<<"OK but..."<<endl;
		else
		cout<<"OK"<<endl;
		
	}
}
