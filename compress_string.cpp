#include<iostream>
#include<string.h>
using namespace std;

void compress(char a[100],int index)
{
	char ret_string;
	if(a[index]=='\0')
	{
	
		return;
	}
	
	compress(a,index+1);
	
	if(a[index]==a[index-1])
	{
		int i=index;
		while(a[i]!='\0')
		{
			a[i]=a[i+1];
			i++;
		}
    	    
	}
	
	return;
}


int main()
{
	char arr[100];
	cin>>arr;
	  
	compress(arr,0);
	
	

	cout<<arr;
	
	
	return 0;
}
