#include<iostream>

using namespace std;

void pattern(char arr[100][100],int n,int k)
{
	if(k==n)
	{
		return;
	}
	for(int i=k,j=k;j<n-k;j++)
	{
		if(k%2==0)
		{
			arr[i][j]='0';
		}
		
		else
		{
			arr[i][j]='X';
		}
	}
	
	for(int i=k+1,j=n-k-1;i<n-k;i++)
	{
		if(k%2==0)
		{
			arr[i][j]='0';
		}
		
		else
		{
			arr[i][j]='X';
		}
	}
	
	for(int i=n-1-k,j=n-k-2;j>=0;j--)
	{
		if(k%2==0)
		{
			arr[i][j]='0';
		}
		
		else
		{
			arr[i][j]='X';
		}
	}
	
	for(int i=n-k-2,j=k;i>k;i--)
	{
		if(k%2==0)
		{
			arr[i][j]='0';
		}
		
		else
		{
			arr[i][j]='X';
		}
	}
	
	pattern(arr,n,k+1);
	
	return ;
}


int main()
{
	int n;
	char arr[100][100];
	
	cin>>n;
	
	pattern(arr,n,0);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j];
		}
		
		cout<<endl;
	}
}
