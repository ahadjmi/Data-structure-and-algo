#include<iostream>

using namespace std;
int main()
{
	int n,m,count=0;
	
	cin>>n;
	cin>>m;
	char a[10][10];
	
	while(true)
	{
		for(int i=0,j=0;j<n;j++)
	   {
		    if(i%2==0)
		        a[i][j]='0';
		    
		    else
		        a[i][j]='X';
		        
		    count++;
		    if(count==n*n)
		    {
		    	break;
			}
		
       }
	
	   for(int j=n,i=1;i>1;i++)
	   {
		    if(i%2==0)
		        a[i][j]='0';
		    
		    else
		        a[i][j]='X';
		        
		    count++;
		    if(count==n*n)
		    {
		    	break;
			}
		
	   }
	
	    for(int i=n-1,j=n-1-1;j>=0;j--)
	    {
	    	if(i%2==0)
		        a[i][j]='0';
		    
		    else
		        a[i][j]='X';
		        
		    count++;
		    if(count==n*n)
		    {
		    	break;
			}
	    }
	
    	for(int i=n-2,j=0;i>=1;i--)
    	{
	    	if(i%2==0)
		        a[i][j]='0';
		    
		    else
		        a[i][j]='X';
		        
		    count++;
		    if(count==n*n)
		    {
		    	break;
			}
    	}
	
   	}
	return 0;
}
