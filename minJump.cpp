#include<bits/stdc++.h>
using namespace std;

int minjump(int arr[],int n)
{
    int dp[n+1]={0};
    
    for(int i=1;i<n;i++)
    {
       
         for(int j=0;j<i;j++)
         {
             if(i<=j+arr[j])
             {
                 dp[i]=min(dp[i],dp[j]+1);
             }
         }
    }
    
    return dp[n-1];
    
}

int main()
 {
	int t;
//	cin>>t;
	cout<<INT_MAX;
//	while(t--)
//	{
//	    int n;
//	    cin>>n;
//	    int arr[n+1];
//	    
//	    for(int i=1;i<=n;i++)
//	    {
//	        cin>>arr[i];
//	    }
//	    
//	   // int c=minjump(arr,n);
//	    cout<<c<<endl;
//	    
//	}
	return 0;
}
