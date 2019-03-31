#include<iostream>

using namespace std;

void convert(string a,int out,int i)
{
	if(a[i]=='\0')
	{
		cout<<out<<endl;
		return;
	}
	
	int temp=a[i];
	
	temp=temp-48;
	
	out=10*out+temp;
	convert(a,out,i+1);
	
	return;
}
int main()
{
	string a;
	int out=0;
	
	cin>>a;
	
	convert(a,out,0);
	
	return 0;
}
