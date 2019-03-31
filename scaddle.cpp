#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	bool t=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			bool flag=1;
			for(int k=0;k<n;k++)
			{
				if(a[i][j]>=a[k][j] && a[i][j]<=a[i][k])
				{
					flag=1;
					
				}
				
				else
				{
					flag=0;
					break;
				}
				
			}
			
			if(flag!=0)
			{
				t=1;
				cout<<i<<","<<j<<endl;
			}
				
		
		}
		
	}
	
	if(t!=1)
	{
		cout<<"No scadle point";
	}
	
	return 0;
}
