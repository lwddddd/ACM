#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int hour;
	int min;
	hour=(s[0]-'0')*10+s[1]-'0';
	min=(s[3]-'0')*10+s[4]-'0';
	//cout<<hour<<" "<<min;
	string dang="Dang";
    int num=hour;
    if(min!=0)
    hour++;
    if(hour>24||hour<=12)
    {
	 cout<<"Only "<<s<<".  Too early to Dang.";
	}
    else
    {
	for(int i=0;i<hour-12;i++)
	  cout<<dang;
	}
	
		
	
}
