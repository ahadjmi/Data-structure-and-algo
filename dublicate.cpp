#include<iostream>
using namespace std;
void rm_dublicate(int arr[100],int n)
{
	int count =0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				for(int k=j;k<=n;k++)
				{
					arr[k]=arr[k+1];
				}
				
	
			}
		}
	}
	
	for(int i=0;i<n-count;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int a[100],n;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	rm_dublicate(a,n);
	
	return 0;
}
