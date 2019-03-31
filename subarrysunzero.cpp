#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp=0;
		
			for(int k=i;k<=j;k++)
			{
				temp+=a[k];
				
				if(temp==0)
			    {
				   int u;
				   
				    for(u=i;u<=k;u++)
				    {
				    	cout<<a[u]<<" ";
				    	
					}
					
				
					cout<<endl;
			    }
				
			}
			
			
		}
	}
	
	
	return 0;
	
}
