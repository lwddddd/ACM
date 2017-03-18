#include<iostream>
using namespace std;
bool equals(int an[],int n)
{
	bool answ=false;
	int num=an[0];
	for(int i=1;i<n;i++)
	{
		if(num!=an[i])
		{
			answ=true;
			break;
		}
		
	}
	return answ;
}
int main()
{
	int n;
	int an[105]={0};
	int bei[105]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>an[i];
	int answer=0;
	while(equals(an,n))
	{
      bei[n-1]=an[0]/2;
      an[0]=an[0]/2;
      for(int i=1;i<n;i++)
      {
      bei[i-1]=an[i]/2;
      an[i]=an[i]/2;     	
	  }
		for(int i=0;i<n;i++)
		{
			an[i]=an[i]+bei[i];
			if(an[i]%2!=0)
			{
				an[i]++;
				answer++;
				
			}
		}
		
	}
	cout<<answer;
	
}
