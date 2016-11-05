#include<iostream>
#include<cmath>
using namespace std;
bool sushu(int n)
{
	if(n==0||n==1)
	return false;
bool a=true;
int k=sqrt(n);
	for(int i=2;i<=k;i++)
		{
			
			if(n%i==0)
			{
			  a=false;
			  break;
		    }
	    }
	    return a;

}
int main()
{
	int n,k;
	int answer[15]={0},a=0;
	cin>>n>>k;
	while(n--)
	{
		if(sushu(n))
		{
			answer[a]=n;
			a++;
		}
		if(a==k)
		break;
	}
	int sum=0;
	for(int i=0;i<a;i++)
	{
	cout<<answer[i];
	sum=sum+answer[i];
	if(i!=a-1)
	cout<<'+';
	}
	cout<<"="<<sum<<endl;
		
}
