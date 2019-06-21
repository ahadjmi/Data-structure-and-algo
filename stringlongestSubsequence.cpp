#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        
        int n = str.length();
        
        int arr[n];
        
        int dp[n];
        
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
        }
        
        for(int i=0;i<n;i++)
        {
            int val = str[i]-'a';
            arr[i] = val;
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i] > arr[j] && dp[i] < 1+dp[j])
                {
                    dp[i] = 1+dp[j];
                }
            }
        }
        
        int max=-23423;
        
        for(int i=0;i<n;i++)
        {
            if(dp[i] > max)
            {
                max = dp[i];
            }
        }
        
        cout<<dp[i]<<endl;
    }
	return 0;
}
