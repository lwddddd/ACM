#include<iostream>
#include<cmath>
using namespace std;
bool sushu(int n)
{
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

int n;
cin>>n;
int a=0,b=0;
for(int i=3;i<n;i++)
{
	a=i;
	if(sushu(a))
	{
		b=n-a;
		if(sushu(b))
		break;
	}
}
cout<<a<<" "<<b;	
}
