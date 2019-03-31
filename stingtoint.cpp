#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char a[100];
	
	int i=0,k,d;
	
	cin>>a;
	d=strlen(a);
	
	while(a[i]!='\0')
	{
		k=a[i];
		k=k-48;
		cout<<k;
		i++;
	}
	
}
