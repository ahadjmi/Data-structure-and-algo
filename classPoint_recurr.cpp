#include<iostream>
using namespace std;


int main()
{
	int a[100],b[100];
	
	int q;
	cin>>q;
	
	int m=0;
	
	while(q--)
	{
		m++;
		int count=0;
		int n;
		a[0]=1;
     	b[0]=1;
    	cin>>n;
		for(int i=1;i<n;i++)
	    {
	    	a[i]=a[i-1]+b[i-1];
	    	b[i]=a[i-1];
	    }
		
		count=a[n-1]+b[n-1];
		cout<<"#"<<m<<" :";
		cout<<count<<endl;
	}
	
	return 0;
	
	
}
