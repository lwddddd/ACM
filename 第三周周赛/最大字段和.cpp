#include<iostream>
using namespace std;
int long1(int lie[],int i,int j,int max)
{
	int now=max;
	for(int k=i+1;k<=j;k++)
	now+=lie[k];
	return now;
	
}
int main()
{
	int n=0;
	cin>>n;
	int lie[100000]={0};
	int i,j,max;
	for(int k=0;k<n;k++)
	scanf("%d",&lie[k]); 
	i=0;
	j=0;
	max=lie[0];
	for(int k=1;k<n;k++)
	{
	int longg=long1(lie,j,k,max);
     if(longg>max)
      {
      	j=k;
      	max=longg;
	  }
	if(lie[k]>max)
      {
      	i=k;
      	j=k;
      	max=lie[k];
	  }
   }
   cout<<max;
	
}
