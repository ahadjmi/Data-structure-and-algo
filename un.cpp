#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char arr[50],rarr[50][50],temp[40];
	string str;
	int d,k;
	
	cout<<"Enter String"<<endl;
	
	getline(cin,str);
	
	
	d=str.length();
	cout<<d<<endl;
	
	for(int i=0;i<d;i++)
	{
		arr[i]=str[i];
	}
	
	for(int i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		if(arr[j] != ' ')
		{
		
			arr[j]=rarr[i][j];
		}
		
		else
		{
			d=strlen(temp);
			cout<<d<<","<<endl;
			
			
		}
	}
	
	cout<<strlen(arr);
	    
	
	return 0;
}
