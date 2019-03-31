#include<iostream>
#include<string.h>

using namespace std;

int strtoint(char str[100],int n,index)
{

	if(str[0]=='\0')
	{
		return 0;
	}
	
	int k;
	k=str[index];
	k=k-48;
	cout<<k;
	strtoint(str,n-index,index+1);
	
}

int main()
{
	char str[100];
	
	int d;
	
	cin>>str;
	d=strlen(str);
	
	strtoint(str,d,0);
}
