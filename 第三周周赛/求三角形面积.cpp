#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double p=0;
	p=(a+b+c)/2;
	double S=p*(p-a)*(p-b)*(p-c);
	S=sqrt(S);
	printf("%.2f",S);
	
}
