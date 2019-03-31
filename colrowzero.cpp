#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n],b[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=1;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				for(int k=0;k<n;k++)
				{
					b[i][k]=0;
					b[k+1][j]=0;
				}
			
			}
		}
	}
	
	cout<<"Output"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
	
	
}
