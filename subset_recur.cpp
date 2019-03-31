#include<iostream>
using namespace std;

bool subsetsum(int in[100],int i,int out[100],int j,int n)
{
	if(i>=n)
	{
		int sum=0;
		for(int k=0;k<j;k++)
		{
			
			sum=sum+out[k];
			
			if(sum==0){
				return true;
			}
		}
		return false;
	}
	
	bool left=subsetsum(in,i+1,out,j,n);
	out[j]=in[i];
	bool right=subsetsum(in,i+1,out,j+1,n);
	
	if(left || right)
	{
		return true;
	}

	return false;
}

int main()
{
	int in[100],out[100],q;
	cin>>q;
	
	while(q>0)
	{
		int n;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>in[i];
		}
		cout<<subsetsum(in,0,out,0,n);
		
		q--;
	}
	
	return 0;
}
