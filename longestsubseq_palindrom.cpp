#include<bits/stdc++.h>
using namespace std;

int palin(string s,int n)
{
   
    
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
         dp[i][i]=1;
    }
     
    int j;    
    for(int c=2;c<=n;c++)
    {
        for(int i=0;i<n-c+1;i++)
        {
            j = i+c-1;
            if (s[i]==s[j]&&c==2)
            {
                dp[i][j]=2;
            }
            else if(s[i]==s[j])
            {
                dp[i][j] = dp[i+1][j-1]+2;
            }
            else
            {
                dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    return dp[0][n-1];
    

}

int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    string str;
	    
	    cin>>str;
	    
	    int n=str.length();
	    
	    int count = palin(str,n);
	    
	    cout<<count<<endl;
	}
	return 0;
}
