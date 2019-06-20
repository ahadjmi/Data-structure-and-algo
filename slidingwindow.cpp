#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    int max;
	    int arr[n];
	    
	    cin>>n;
		cin>>k;
	
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    
	    for(int i=0;i<=n-k;i++)
	    {
	         max=-233223;
	        for(int j=i;j<k+i;j++)
	        {
	            if(arr[j] > max)
	            {
	                max=arr[j];
	                
	            }
	            
	        }
	        
	        cout<<max<<" ";
	       
	    }
	    cout<<endl;
	}
	return 0;
}
