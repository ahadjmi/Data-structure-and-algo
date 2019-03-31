#include<iostream>

using namespace std;
void sumarr(int a[10],int n,int num)
{

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==num)
			{
				cout<<a[i]<<" and "<<a[j]<<endl;
			}
		}
	}
}


int main()
{
	int n,num;
	
	int a[10];
	cin>>n;
	
	
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cin>>num;
	sumarr(a,n,num);
	
	return 0;
}
