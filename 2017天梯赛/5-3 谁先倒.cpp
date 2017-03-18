#include<iostream>
using namespace std;
int main()
{
	int A_max;
	int B_max;
	int A_he=0,B_he=0;
	int hang;
	cin>>A_max>>B_max>>hang;
	for(int i=0;i<hang;i++)
	{
		int A_han,A_hua,B_han,B_hua;
		cin>>A_han>>A_hua>>B_han>>B_hua;
		int sum=A_han+B_han;
		if(A_hua==B_hua)
		continue;
		if(A_hua==sum)
		{
		A_max--;
		A_he++;
		}
		if(B_hua==sum)
		{
		B_max--;
		B_he++;
		}
		if(B_max<0||A_max<0)
		break;		
	}
	if(A_max<0)
	cout<<"A"<<endl<<B_he;
	if(B_max<0)
	cout<<"B"<<endl<<A_he;
	
	
}
