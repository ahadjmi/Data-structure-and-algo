#include<iostream>
using namespace std;

int staircase(int n)
{
	
	if(n==0)
	{
		return 1;
	}
	
	else if(n==1)
	{
		return 1;
	}
	
	int c=staircase(n-1)+staircase(n-2);
	
	return c;
	
	
}

int main()
{
	int n;
	
	int a=1;
	int b=1;
	
	cin>>n;
	
	cout<<staircase(n);
}
