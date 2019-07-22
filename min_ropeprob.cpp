#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    
    while(t--)
    {
         priority_queue<int,vector<int>,greater<int> >pq;
         int n;
         queue<int> q;
         cin>>n;
         int arr[n];
         
         for(int i=0;i<n;i++)
         {
             int val;
             cin>>val;
             arr[i] = val;
             pq.push(val);
         }
         
         while(pq.size()>1)
         {
             int a = pq.top();
             int b=0;
             pq.pop();
             if(!pq.empty())
             {
                 b = pq.top();
                 pq.pop();
             }
             else
             {
                 b=0;
                
             }
            
             q.push(a+b);
             pq.push(a+b);
         }
         
        int r=0;
         
        while(!q.empty())
        {
           r += q.front();
           q.pop();
        }
        
        cout<<r<<endl;
    }

   
    return 0;
}
