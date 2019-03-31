#include<iostream>

using namespace std;
int main()
{
	int n,arr[100];
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int start=0;
	int end=n-1;
	
	
	while(start<end)
	{
	
		if(arr[start]>arr[end])
		{
			arr[start]=0;
			arr[end]=1;
			start++;
			end--;
		}
		else if(arr[end]>arr[start])
		{
			start++;
		}
		
		else
		{
			start++;
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}
