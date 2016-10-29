#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int wu[105]={0};
	int er[105]={0};
	int yi[105]={0};
	int k=1;
	wu[k]=1;
	er[k]=46;
	yi[k]=53;
	for(int i=2;i<=n;i++)
	{
		k=i;
		wu[k]=wu[k-1]+1;
		er[k]=er[k-1]-4;
		yi[k]=yi[k-1]+3;
		if(wu[k]*5+er[k]*2+yi[k]!=150&&wu[k]+er[k]+yi[k]!=100)
		break;
	}
	for(int i=1;i<=n&&i<=12;i++)
	cout<<wu[i]<<" "<<er[i]<<" "<<yi[i]<<endl;
}
