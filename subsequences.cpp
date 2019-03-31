#include<iostream>
using namespace std;

void subsequences(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
	    cout<<out<<" ";
		return;
	}
	
	
	subsequences(in,out,i+1,j);
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	
	
	return;
	
}

int main()
{
	char a[100],b[100];
	cin>>a;
	subsequences(a,b,0,0);
	return 0;
}
