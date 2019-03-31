#include<iostream>

using namespace std;
void merge(int arr[100],int start,int end,int mid)
{
	int start1=start;
	int end1=mid;
	int start2=mid+1;
	int end2=end;
	
	int temp[100];
	
	int k=0;
	
	while(start1<=end1 && start2<=end2)
	{
	
		if(arr[start1]>arr[start2])
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
	
	for(int i=0;i<k;i++)
	{
		arr[start++]=temp[i];
	}
}


void merge_sort(int arr[100],int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int mid=(start+end)/2;
	merge_sort(arr,start,mid);
	merge_sort(arr,mid+1,end);
	
	merge(arr,start,end,mid);
	return;
}


int main()
{
	int n,arr[100];
	cin>>n;
	int start,end;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	start=0;
	end=n-1;
	merge_sort(arr,start,end);
	
	for(int i=0;i<=end;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
