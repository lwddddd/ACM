#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	string s;
	cin>>s;
	double num=0;
	double num2=0;
	double bei=1;
	char a=s[num];
	while(a!=0)
	{
		 if(a=='2')
		 num2++;
		 
		 num++;
		 a=s[num];
		
	}
	if(s[num-1]%2==0)
	{
		bei=bei*2;
	}
	if(s[0]=='-')
	{
		bei=bei*1.5;
		num--;
	}
	bei*=num2/num;
	bei*=100;
	cout<<fixed<<setprecision(2)<<bei<<"%"<<endl;
}
