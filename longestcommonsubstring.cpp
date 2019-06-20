#include<iostream>
using namespace std;

int lcs(char str1[1000],char str2[1000],int m,int n)
{
    int dp[m+1][n+1];
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            
            dp[i][j]=-1;
           
        }
    }
    
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=0;
    }
    
    for(int i=0;i<=m;i++)
    {
        dp[i][0]=0;
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str1[i]==str2[j])
            {
                dp[i+1][j+1]=1+dp[i][j];
            }
            else
            {
                dp[i+1][j+1]=0;
            }
        }
    }
    int max=-1;
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(dp[i][j] > max)
            {
                max=dp[i][j];
            }
        }
    }
    
    return max;
}
int main()
 {
    int t;
    cin>>t;
    
    while(t--)
    {
        char str1[1000],str2[1000];
        int m,n;
        
        cin>>m>>n;
        
        cin>>str1;
        
        cin>>str2;
     
        int count = lcs(str1,str2,m,n);
        cout<<count<<endl;
    }
    
	return 0;
}
