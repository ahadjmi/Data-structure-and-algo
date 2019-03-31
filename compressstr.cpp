#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],temp;
	int d,count=1;

	cin>>a;
	d=strlen(a);
	
	int i=1;
	while(i<=d)
	{
	
		if(a[i]==a[i-1])
		{
			count++;
		}
		
		else
		{
			
			cout<<a[i-1];
			cout<<count;
			count=1;
			
		}
		i++;
		
	}
	
	
	return 0;
}
