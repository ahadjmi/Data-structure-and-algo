#include<iostream>
using namespace std;

bool arraysev(int arr[10],int n,int index)
{
	if(index==n)
	{
		return false;
	}
	
	
	if(arr[index]==7)
	{
		return true;
	}
	
	bool check_right =arraysev(arr,n,index+1);
	
	return check_right;
}

int first_check(int arr[10],int n,int index)
{
	if(index==n)
	{
		return -1;
	}
	
	
	if(arr[index]==7)
	{
		return index;
	}
	
	int check_right =first_check(arr,n,index+1);
	
	return check_right;
}



int main()
{
	int n;
	int arr[10];
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	cout<<arraysev(arr,n,0)<<endl;
	cout<<first_check(arr,n,0)<<endl;
	
	return 0;
}
