#include<iostream>

using namespace std;
int main()
{
	int n,start,mid,end;
	int arr[30]={1,2,3,4,5,6};
	cin>>n;
	start=0;
	end=5;
	while(start<=end)
	{
		mid=(start+end)/2;
		
		if(arr[mid]==n)
		{
			cout<<"Found";
			return 0;
		}
		else if(arr[mid]<n)
		{
			start=mid+1;
			
		}
		
		else if(arr[mid]>n)
		{
			end=mid-1;
		}
	}
	
	cout<<"Not found";
	
	return 0;
}
