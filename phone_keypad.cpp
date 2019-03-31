#include<iostream>
using namespace std;
char key[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printout(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<",";
		return;
	}
	int digit=in[i]-'0';
	
	if(digit==1 || digit==0)
	{
		printout(in,out,i+1,j);
	}
	
	for(int k=0;key[digit][k]!='\0';k++)
	{
		out[j]=key[digit][k];
		printout(in,out,i+1,j+1);
	}
}

int main()
{
	char in[100],out[100];
	cin>>in;
	
	printout(in,out,0,0);
	
	return 0;
}
