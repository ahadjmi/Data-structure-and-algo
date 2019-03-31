#include<iostream>
#include<string.h>
using namespace std;
void reverse(int num)
{
	while(num>0)
	{
		int x;
		x=num%10;
		cout<<x;
		num=num/10;
	}
	
	cout<<endl;
}

void reverse(char str[100],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp;
		temp=str[n-i-1];
		str[n-i-1]=str[i];
		str[i]=temp;
	}
	cout<<str<<endl;
}

void reverse(int arr[100],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp;
		temp=arr[n-i-1];
		arr[n-i-1]=arr[i];
		arr[i]=temp;
	}
	
	for(int i=0;i<n;i++)
	{
			cout<<arr[i];
	}
	cout<<endl;

}
int main()
{
	int number,arr[100],n;
	char str[100],d;
	cout<<"Enter Number:"<<endl;
	cin>>number;
	cin>>str;
	cin>>n;
	
	d=strlen(str);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	reverse(number);
	reverse(str,d);
	reverse(arr,n);
}
