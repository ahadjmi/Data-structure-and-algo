#include<iostream>

using namespace std;

int main()
{
	int n,k=0,l=2;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<n-i-1)
			{
				cout<<" ";
			}
			else
			{
				k++;
				cout<<k;
				
			}
			
		}

		for(int j=0;j<i;j++)
		{
		
			k--;
			cout<<k;
	
			
		}
		cout<<endl;
	}
	return 0;
}
