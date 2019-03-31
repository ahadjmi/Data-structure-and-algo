#include<iostream>
using namespace std;

bool isZero(int arr[100],int i,int n)
{
	if(i==n)
	{
		return false;
	}
	
	for(int k=i;k<n-1;k++)
	{
		if(arr[i]+arr[k]==0)
		{
			return true;
		}
		bool check=isZero(arr,i+1,n);
		if(check==true)
		{
			return true;
		}
		
	}
	
	return false;
}

int main()
{
	int q,n;
	int arr[100];
	
	cin>>q;
	while(q>0)
	{
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	    bool flag=isZero(arr,0,n);
	    if(flag==1)
	    {
	    	cout<<"Yes";
	    	
		}
		else
		{
			cout<<"No";
		}
		q--;
	}
}
