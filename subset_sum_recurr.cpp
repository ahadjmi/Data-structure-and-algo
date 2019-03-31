#include<iostream>
using namespace std;

bool subset_sum(int *a,int *b,int n,int i,int j)
{
    if(i==n)
    {
        for(int k=0;k<j;k++)
        {
            cout<<b[k];
        }
        cout<<",";
        return false;
    }
    
    b[j]=a[i];
    subset_sum(a,b,n,i+1,j);
    b[j]=a[i];
    subset_sum(a,b,n,i+1,j+1);
}


int main() {
    
    int a[100],b[100],n,q;
    bool flag;
    cin>>q;
    
    while(q>0)
    {
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<100;i++)
        {
        	b[i]=0;
		}
        
        flag=subset_sum(a,b,n,0,0);
        
        if(flag)
        {
            cout<<"Yes";
        }
        
        else
        {
            cout<<"No";
        }
    }
	return 0;
}
