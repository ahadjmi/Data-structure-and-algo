#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    int arr[1000];
	    
	    cin>>n>>k;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int sum;
	    int flag=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        sum=0;
	        
	        for(int j=i;j<n;j++)
	        {
	            sum+=arr[j];
	            if(sum == k)
	            {
	                cout<<i+1<<" "<<j+1<<endl;
	                flag=1;
	                break;
	            }
	            else if(sum>k)
	            {
	                break;
	            }
	        }
	        if(flag==1)
	        {
	            break;
	        }
	        
	    }
	    if(sum!=k)
	    {
	        cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}
