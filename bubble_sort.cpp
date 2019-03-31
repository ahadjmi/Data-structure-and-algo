#include<iostream>

using namespace std;

void bubble_sort(int arr[100],int n,int index)
{
	if(n-index-1==0)
	{
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			
			return;
	}
	
	for(int i=0;i<n-index-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}	
		
	}
	
	bubble_sort(arr,n,index+1);
		
}

int main()
{
	int arr[100],n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	bubble_sort(arr,n,0);
}
