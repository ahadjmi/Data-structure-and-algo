#include<iostream>
using namespace std;

int last_index(int a[100],int n,int val,int index)
{
	if(index==n)
	{
		return -1;
	}
	
	int check=last_index(a,n,val,index+1);
	if(check!=-1)
	{
		return check;
	}
	if(a[index]==val)
	{
		return index;
		
	}
	
	return -1;
	
}

int main()
{
	int n,a[100],val;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	cin>>val;
	
	cout<<last_index(a,n,val,0);
	
	return 0;
}

