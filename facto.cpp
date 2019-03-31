#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact=1;
	
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	
	return fact;
}

int combination(int n,int r)
{
	int com,d;
	d=n-r;
	com=factorial(n)/(factorial(d)*factorial(r));
	
	return com;
}

int main()
{
	int n,r;
	cin>>n>>r;
	cout<<combination(n,r);
	
	return 0;
}
