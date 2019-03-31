#include<iostream>
using namespace std;

int search_binary(int arr[100],int start,int end,int val)
{
	if(start>=end)
	{
		return -1;
	}
	int mid=(start+end)/2;
	
	
	if(val==arr[mid])
	{
		return mid;
	}
	
	else if(val<mid)
	{
		return search_binary(arr,start,mid-1,val);
	}
	
	else
	{
		return search_binary(arr,mid+1,end,val);
	}
	

}

int main()
{
	int n,arr[100],start,end,mid,val;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>val;
	start=0;
	end=n-1;
	mid=(start+end)/2;
	
	cout<<search_binary(arr,start,end,val);
}


