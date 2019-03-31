#include<iostream>
#include<string>
using namespace std;

bool stringcompare(string str1,string str2)
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


void printString(string str,string out,int i)
{
	if(str[i]=='\0')
	{
	
	    if(stringcompare(out,str))
	    {
	       	cout<<str<<" ";	
		}
	  
		
		return;
	}
	
	for(int k=i;str[k]!='\0';k++)
	{
		swap(str[i],str[k]);
		printString(str,out,i+1);
		swap(str[i],str[k]);
	}
	
	return;
}

int main()
{
	string str,out;
	cin>>str;
	out=str;
	
	printString(str,out,0);
	
	return 0;
}
