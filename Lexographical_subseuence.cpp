#include<iostream>
using namespace std;

char shortString[100][100];
int l=0,m=0;
void subsequences(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		int l=0;
		for(l;out[l]!='\0';l++)
		{
			 shortString[m][l]= out[l];
		}
		shortString[m][l]='\0';
	    m++;
		return;
	}
	
	
	subsequences(in,out,i+1,j);
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	
	
	return;
	
}

bool stringcompare(char *str1,char *str2)
{
	int i=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]>str2[i])
		{
			return true;
		}
		else if(str1[i]==str2[i])
		{
			i++;
			continue;
		}
		else
		{
			return false;
	    }
	
	}
	i++;
	if(str1[i]!='\0')
	{
		return true;
	}
	
	else
	{
		return false;
	}
	
}

int main()
{
	int q;
	cin>>q;
	while(q>0)
	{
			char a[100],b[100];
	        cin>>a;
        	subsequences(a,b,0,0);

        	for(int i=0;i<m;i++)
        	{
        		for(int j=0;j<m-i-1;j++)
	         	{
	         		if(stringcompare(shortString[j],shortString[j+1]))
		        	{
		        		swap(shortString[j],shortString[j+1]);
		   		
		        	}
 	        	}
        	}
        	for(int i=0;i<m;i++)
        	{
		
        		cout<<shortString[i]<<" ";
        	}
        	l=0;
        	m=0;
    		q--;
	}

	return 0;
}
