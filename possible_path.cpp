#include<iostream>
using namespace std;

int path(int m,int n)
{
	if( m==1 || n==1)
	{
		return 1;
	}
	int a=path(m-1,n);
	int b=path(m,n-1);
	int total= a+b; 
	return total;
}

int main()
{
	int m,n;
	
	cin>>m>>n;
	
	
	cout<<path(m,n);
	
}
