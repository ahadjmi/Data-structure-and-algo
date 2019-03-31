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
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp=0;
			for(int k=i;k<=j;k++)
			{
				temp+=a[k];
				
			}
			
			if(max<temp)
			{
				max=temp;
			}
		
		}
	}
	
	cout<<max;
	
	return 0;
	
}
