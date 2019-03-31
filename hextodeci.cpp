#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int hextodeci(char str[100],int n)
{
	int i=0,k;
	int temp =0;
	while(str[i]!='\0')
	{
		k=str[i];
		
		if(k>='A' && k<='F')
		    k=k-55;
		    
		else
		    k=k-48;
		    
		temp += pow(16,n-1)*k;
		
		n--;
		i++;
		
	}
	
	
	
	return temp;
}

int main()
{
	char a[100];
	
	cin>>a;
	
	int d=strlen(a);
	
	cout<<hextodeci(a,d);
	
	return 0;
}
