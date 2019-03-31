#include<iostream>
using namespace std;

int main()
{
	
	int r,c;
	cin>>r>>c;
	
	int a[r][c];
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int j=0;j<c;j++)
	{
		for(int i=0;i<r;i++)
		{
			if(j%2==0){
			   cout<<a[i][j]<<" ";
	    	}
	    	
	    	else
	    	{
	    		cout<<a[r-1-i][j]<<" ";
			}
		}
	}
	
	return 0;
	
}
