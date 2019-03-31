#include<iostream>
#include<math.h>
using namespace std;
int main() {
    
    int q;
    
    cin>>q;
    
    while(q>0)
    {
        int n,a[1000],b[1000];
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        
        for(int i=0;i<n;i++)
        {
            int num=a[i],count=0;
            
            int temp=num;
            
            while(temp>0)
            {
                count+=1;
                temp=temp/10;
                
            }
            
            for(int j=1;j<=(5-count);j++)
            {
                num=num*10;
            }
            
            b[i]=num;
            
        }
        
        for(int j=0;j<n;j++)
        {
            int max=-75435;
            int maxindex;
            for(int l=0;l<n;l++)
            {
                if(b[l]>max)
                {
                    max=b[l];
                    maxindex=l;
                    
                }
                    
            }
            
            cout<<a[maxindex];
            b[maxindex]=-456545;

        }
        
        q--;
    }
    
    
	return 0;
}
