#include<iostream>
using namespace std;
int main() {
    
    int n,arr1[10000],arr2[10000],arr3[10000];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int temp=arr1[i];
        arr3[temp]=i;
        
        
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr3[i]<<" ";
    }
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr3[i]!=arr2[i])
        {
             flag=1;
            break;
        }
        
       
    }
    
    if(flag!=1)
        cout<<"true";
        
    else
        cout<<"false";
	return 0;
}
