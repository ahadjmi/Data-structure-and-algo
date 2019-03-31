#include<iostream>

using namespace std;
int all_7(int arr[100],int n,int index)
{
	if(index==n)
	{
		return -1;
	}
	
	if(arr[index]==7)
	{
		cout<<index<<",";
	}
	
	int right=all_7(arr,n,index+1);
	
	return right; 
	
}

int main()
{
	int arr[100],n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	all_7(arr,n,0);
}
