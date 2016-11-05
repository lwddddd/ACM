#include<iostream>
using namespace std;
int main()
{
	char a[26]={0};
	char b[26]={0};
	int chu[26]={0};
	char mi[105]={0};
	char yuan[105]={0};
	cin>>mi;
	cin>>yuan;
	bool fa=true;
	int i=0;
	while(yuan[i]!=0)
	{
		chu[yuan[i]-'A']=1;
		i++;
	}
   for(i=0;i<26;i++)
	if(chu[i]==0)
	{
		fa=false;
		break;		
	}
	i=0;
	while(mi[i]!=0)
	{
		if(a[mi[i]-'A']==0||a[mi[i]-'A']==yuan[i])
		a[mi[i]-'A']=yuan[i];
		else {
			fa=false;
			break;
		}
		i++;
	}
	while(yuan[i]!=0)
	{
       if(b[yuan[i]-'A']==0||b[yuan[i]-'A']==mi[i])
        b[yuan[i]-'A']=mi[i];
        else {
			fa=false;
			break;
		}
		i++;
	}
	if(fa==false)
	{
	cout<<"Failed";
	return 0;
    }
    char po[105]={0};
    cin>>po;
    char answer[105]={0};
    i=0;
    while(po[i]!=0)
    {
    	answer[i]=a[po[i]-'A'];
    	i++;
	}
    cout<<answer;
	
	
}
