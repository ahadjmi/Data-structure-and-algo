#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[100];
	
	cin.getline(a,100);
	
	int n,k;
	n=strlen(a);
	
	for(int i=0;i<n;i++)
	{
		k=a[i];
		if(k%2==0)
		{
			a[i]=k-1;
		}
		
		else
		{
			a[i]=k+1;
		}
	}
	
	cout<<a;
	
	return 0;
}
