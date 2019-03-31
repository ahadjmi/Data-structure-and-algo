#include<iostream>
using namespace std;

int subsetSum(int *a,int n,int val,int index)
{
    if(index==n-1)
    {
        return a[index];
    }
   int num = subsetSum(a,n,val,index+1);
   sum=sum+num;
    if()
}

int main() {
    
    int n,a[100],val;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cin>>val;
    
    subsetSum(a,n,val,0);
	return 0;
}
