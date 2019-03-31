#include<iostream>

using namespace std;
int main()
{
	int n,flag;
	cin>>n;
	
	for(int i=2;i<n;i++)
	{
		flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0){
				flag=1;
			}	
		}
		
		if(flag!=1)
		{
			cout<<i<<endl;
		}		
	}
	return 0;
	
}
