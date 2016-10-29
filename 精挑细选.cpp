#include<iostream>
#include<cmath>
using namespace std;
struct ke{
	int g;
	int b;
	int id;
};
int main()
{
	int zu;
	cin>>zu;
	for(int p=0;p<zu;p++)
	{
	ke max;
	int n;
	cin>>n;
	int g,b,id;
	cin>>g>>b>>id;
	max.g=g;
	max.b=b;
	max.id=id;
	for(int i=1;i<n;i++)
	{
		cin>>g>>b>>id;
		if(g<max.g)
		continue;
		if(g>max.g)
		{
		max.g=g;
	    max.b=b;
	    max.id=id;
	    continue;
		}
		if(b>max.b)
		continue;
		if(b<max.b)
		{
		max.g=g;
	    max.b=b;
	    max.id=id;
	    continue;
		}
		if(id>max.id)
		{
		max.g=g;
	    max.b=b;
	    max.id=id;
	    continue;
		}		
	}
	cout<<max.id<<endl;
   }
} 
