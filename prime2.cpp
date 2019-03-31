#include<iostream>
using namespace std;

void isprime(int n)
{
	bool arr[100]={false};
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			for(int j=0;j<n;j++)
			{
				arr[i*j]=true;
			}
		}
	}
	
	if(arr[n]==true)
	{
		cout<<"Not prime";
	}
	
	else
	{
		cout<<"Prime";
	}
}
using namespace std;
int main()
{

	int n;
	cin>>n;
	isprime(n);
	
	return 0;	
}
