#include<iostream>
#include<string>
using namespace std;
string zhuan(int a)
{
	string an;
	if(a==0)
	an="ZERO";	
	if(a==1)
	an="ONE";
	if(a==2)
	an="TWO";
	if(a==3)
	an="THREE";
	if(a==4)
	an="FOUR";
	if(a==5)
	an="FIVE";
	if(a==6)
	an="SIX";
	if(a==7)
	an="SEVEN";
	if(a==8)
	an="EIGHT";
	if(a==9)
	an="NINE";
	if(a==10)
	an="TEN";
	if(a==11)
	an="ELEVEN";
	if(a==12)
	an="TWELVE";
	if(a==13)
	an="THIRTEEN";
	if(a==14)
	an="FOURTEEN";
	if(a==15)
	an="FIFTEEN";
	if(a==16)
	an="SIXTEEN";
	if(a==17)
	an="SEVENTEEN";
	if(a==18)
	an="EIGHTEEN";
	if(a==19)
	an="NINETEEN";
	return an;
}
string zhuan2(int a)
{
	string an="";
	if(a==2)
	an=="TWENTY";
	if(a==3)
	an=="THIRTY";
	if(a==4)
	an=="FORTY";
	if(a==5)
	an=="FIFTY";
	if(a==6)
	an=="SIXTY";
	if(a==7)
	an=="SEVENTY";
	if(a==8)
	an=="EIGHTY";
	if(a==2)
	an=="NINETY";
	return an;
	
} 
int main()
{
	double n=0;
	while(cin>>n)
	{
		int a=n;
		if(a==0)
		{
			cout<<"ZERO Dollar";			
		}
		if(a>=100)
		{
			int bai=a/100;
			cout<<zhuan(bai)<<" HUNDRED ";
			a=a%100;
		}
		if(a>19)
		{
			int bai=a/10;
			cout<<zhuan2(bai)<<" ";
			a=a%10;
		}
		if(a>0)
		{
			cout<<zhuan(a)<<" ";			
		}
		cout<<"Dollars ";
	}
	
}
