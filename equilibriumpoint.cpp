#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n,arr[1000];
	   int ls,rs;
	   cin>>n;
	   
	      if(n==1)
	      {
	          cout<<"1"<<endl;
	          continue;
	      }
	      
	   
	       for(int i=0;i<n;i++)
	       {
	           cin>>arr[i];
	       }
	       
	       for(int i=0;i<n;i++)
	       {
	           ls=0;
	           rs=0;
	           for(int j=0;j<i;j++)
	           {
	               ls+=arr[j];
	           }
	           
	           for(int k=i+1;k<n;k++)
	           {
	               rs+=arr[k];
	           }
	           
	           if(ls==rs)
	           {
	               cout<<i+1<<endl;
	               break;
	           }
	       }
	       if(ls!=rs)
	       {
	           cout<<"-1"<<endl;
	       }
	}
	return 0;
}
