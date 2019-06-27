#include<iostream>
using namespace std;

int knapsack(int val[1000],int wt[1000],int n,int tw)
{
    int dp[n+1][tw+1];
    
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    
    for(int i=0;i<=tw;i++)
    {
        dp[0][i]=0;
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=tw;j++)
        {
            if(wt[i] <= j)
            {
                dp[i][j]=max(val[i] + dp[i][j-wt[i]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    return dp[n][tw];
}

int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,tw;
	    cin>>n>>tw;
	    int val[1000],wt[1000];
	    
	    for(int i=1;i<=n;i++)
	    {
	       cin>>val[i]; 
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
	       cin>>wt[i]; 
	    }
	    
	    int c=knapsack(val,wt,n,tw);
	    
	    cout<<c<<endl;
	    
	    
	}
	return 0;
}
