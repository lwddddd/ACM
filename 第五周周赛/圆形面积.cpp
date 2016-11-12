#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	double pi=3.1415926536;
	double r;
	cin>>r;
	double mian,biao,ti;
	mian=pi*r*r;
	biao=4*pi*r*r;
	ti=(double)(4.0/3.0)*pi*r*r*r;
    
	 cout<<left<<setw(20)<<fixed<<setprecision(10)<<mian<<left<<setw(20)<<setprecision(10)<<biao<<left<<setw(20)<<setprecision(10)<<ti;
	
}
