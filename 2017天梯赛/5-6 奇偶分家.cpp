#include<iostream>
using namespace std;
int main()
{
int n=0;
cin>>n;
int ji=0,ou=0;
for(int i=0;i<n;i++)
{
	int num=0;
	cin>>num;
	if(num%2==0)
	ou++;
	else ji++;
	
}
cout<<ji<<" "<<ou;
}
