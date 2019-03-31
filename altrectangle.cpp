#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char a[n][n]={'Z'};
	int k=0,count=0;
	
    while(true)
	{
		for(int i=k,j=k;j<n-k;j++)
		{
			if(k%2==0)
			{
			   a[i][j]='0';
			   
	    	}
			   
			else
			{
			   a[i][j]='X';
	     	}
			
			count++;
			
		}
		
		if(count==n*n)
		{
				break;
		}
		
		for(int i=k+1,j=n-k-1;i<n-k;i++)
		{
			if(k%2==0)
			{
			   a[i][j]='0';
			   
	    	}
			   
			else
			{
			   a[i][j]='X';
	     	}
			
			count++;
			
		}
		
		if(count==n*n)
		{
			break;
		}
		
		for(int i=n-k-1,j=n-k-2;j>=k;j--)
		{
			if(k%2==0)
			{
			   a[i][j]='0';
			   
	    	}
			   
			else
			{
			   a[i][j]='X';
	     	}
			
			count++;
			
		}
		
		if(count==n*n)
		{
			break;
		}
		
		for(int i=n-k-2,j=k;i>k;i--)
		{
			if(k%2==0)
			{
			   a[i][j]='0';
			   
	    	}
			   
			else
			{
			   a[i][j]='X';
	     	}
			
			count++;
			
			
		}
		
		if(count==n*n)
		{
		    break ;
		}
		
		k++;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
}
