#include<iostream>

using namespace std;
bool check4(int a[100],int n,int index,int val)
{
	if(n==index)
	{
		return false;
	}
	
	if(a[index]==val)
	{
		return true;
	}
	
	return check4(a,n,index+1,val);
}

int first_4(int a[100],int n,int index,int val)
{
	if(index==n)
	{
		return -1;
	}
	
	if(a[index]==val)
	{
		return index;
	}
	int check_right=first_4(a,n,index+1,val);
	return check_right;
}

int last_4(int a[100],int n,int index,int val)
{
	if(index==n)
	{
		return -1;
	}
	
	
	int check_left=last_4(a,n,index+1,val);
	
	
	if(a[index]==val)
	{
		
		cout<<index;
	}
	
	
	return check_left;

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
	
	cout<<first_4(a,n,0,val);
}
