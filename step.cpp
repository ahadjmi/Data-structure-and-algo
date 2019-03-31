#include<iostream>
using namespace std;
//int count=0;
int dp[1000];

int fact(int n)
{
	
	if(n==0 || n==1)
	{
	
		return 1;
	}

	if(dp[n]!=-1)
	{
		return dp[n];
	}

	int count1=fact(n-2);

	int count2=fact(n-1);

	dp[n]=count1+count2;
	
	return dp[n];
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<1000;i++)
    {
    	dp[i]=-1;
    }
	cout<<fact(n);
	
	return 0;
}
