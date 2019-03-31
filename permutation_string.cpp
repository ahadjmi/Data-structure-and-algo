#include<iostream>
#include<string.h>
using namespace std;

void swap(char a,char b)
{
	char temp;
	temp=a;
	a=b;
	b=temp;
}

void permutation(char arr[100],int n,int index)
{
	if(index==n-1)
	{
		cout<<arr;
		return;
	}
	
	permutation(arr,n-1,index+1);
	swap(arr[index],arr[index-1]);
	permutation(arr,n-index,index+1);
	
	return;
}

int main()
{
	char arr[100];
	int d;
	cin>>arr;
	
	d=strlen(arr);
	
	permutation(arr,d,0);
}
