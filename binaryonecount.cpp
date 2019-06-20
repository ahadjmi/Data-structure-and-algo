#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    char str[10000],n;
	    cin>>n;
	    int j;
	    for(j=0;j<n;j++)
	    {
	    	 cin>>str[j];
		}
	    str[j]='\0';
	    int i=0;
	    int count =0;
	    
	    while(str[i]!=NULL)
	    {
	       
	        for(int j=i+1;j<n;j++)
	        {
	            if(str[i]=='1' && str[j]=='1')
	            {
	                count++;
	            }
	        }
	        
	        i++;
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
