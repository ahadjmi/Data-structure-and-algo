#include<iostream>

using namespace std;

void merge(int arr[100],int start,int mid,int end)
{
	int start1=start;
	int start2=mid+1;
	int end1=mid;
	int end2=end;
	
	int temp[100];
	
	int k=0;
	
	while(start1<=end1 && start2<=end2)
	{
		if(arr[start1]>=arr[start2])
		{
			temp[k++]=arr[start2++];
		}
		
		else
		{
			temp[k++]=arr[start1++];
		}
		
	}
	
	while(start1<=end1)
	{
		temp[k++]=arr[start1++];
	}
	
	while(start2<=end2)
	{
		temp[k++]=arr[start2++];
	}
	
	
	for(int i=0;i<=end;i++)
	{
		cout<<temp[i];
	}
	
}

int main()
{
	int arr[100],n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	
	merge(arr,start,mid,end);
	
	return 0;
}
