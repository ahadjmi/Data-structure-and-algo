#include<iostream>
using namespace std;

void splitarray(int arr[100],int s1[100],int s2[100],int n,int i,int j,int k)
{
	if(i==n)
	{
		int sum1=0;
		int sum2=0;
		for(int i=0;i<j;i++)
		{
			sum1+=s1[i];
		}
		for(int i=0;i<k;i++)
		{
			sum2+=s2[i];
		}
		
		if(sum1==sum2)
		{
				for(int i=0;i<j;i++)
		        {
		        	cout<<s1[i]<<" ";
	        	}
	        	cout<<" || ";
	        	for(int i=0;i<k;i++)
	        	{
	        		cout<<s2[i]<<" ";
	        	}
	        	
	        	cout<<endl;
		}
		
		return;
	}
	s1[j]=arr[i];
   	
	
	splitarray(arr,s1,s2,n,i+1,j+1,k);
	s2[k]=arr[i];
	splitarray(arr,s1,s2,n,i+1,j,k+1);
	
	return;
}

int main()
{
	int n;
	int arr[100],s1[100]={0},s2[100]={0};
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	splitarray(arr,s1,s2,n,0,0,0);
	return 0;
}
