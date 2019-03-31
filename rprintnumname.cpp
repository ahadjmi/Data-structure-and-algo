#include<iostream>

using namespace std;

int callval(int n)
{
	if(n==0)
	{
		return 0;
	}
	
	int x;	
	
	callval(n/10);
	
	printn(n%10);
	char s=printn(x);
	return 0;
	 
}

char printn(int x)
{
	if(x==1)
	{
		cout<<"one ";
	}
	
	else if(x==2)
	{
		cout<<"two ";
	}
	
	else if(x==3)
	{
		cout<<"three ";
	}
	
	else if(x==4)
	{
		cout<<"four ";
	}
	
	else if(x==5)
	{
		cout<<"five ";
	}
	
	else if(x==6)
	{
		return "six ";
	}
	
	else if(x==7)
	{
		cout<<"seven ";
	}
	
	else if(x==8)
	{
		cout<<"eight ";
	}
	
	else if(x==9)
	{
		cout<<"nine ";
	}
	
	else
	{
		cout<<"zero ";
	}
}


int main()
{
	int num;
	cin>>num;
	
	cout<<callval(num) ;
}
