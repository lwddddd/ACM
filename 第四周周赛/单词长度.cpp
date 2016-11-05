#include<iostream>
using namespace std;
int main()
{
	char a;
	bool tr=true;
	int n; 
	while(cin.get(a))
	{
    if(a=='.')
    {
    	cout<<n<<" ";
    	n=0;
    	break;
	}
	if(a==' '&&n!=0)
	{
		cout<<n<<" ";
		n=0;
	}
	else n++;		
	}
	
	
}
