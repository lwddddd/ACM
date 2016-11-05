#include<iostream>
#include<cmath>
using namespace std;
struct dian{
	int x;
	int y;
};
int main()
{
	int n;
	while(true)
	{
		cin>>n;
		if(n==0)
		break;
		dian d[1000];
		for(int i=0;i<n;i++)
		cin>>d[i].x>>d[i].y;
		int a=0,b=1;
		double min=sqrt(pow(d[a].x-d[b].x,2)+pow(d[a].y-d[b].y,2));
		for(int j=0;j<n;j++)
		  for(int k=j+1;k<n;k++)
		  {
		  	double bei=sqrt(pow(d[j].x-d[k].x,2)+pow(d[j].y-d[k].y,2));
		  	if(min>bei)
		  	{
		  		min=bei;
		        a=j;
		        b=k;
			}		  	
		  }
		  cout<<"("<<d[a].x<<","<<d[a].y<<") "<<"("<<d[b].x<<","<<d[b].y<<")"<<endl;
	}
	
}
