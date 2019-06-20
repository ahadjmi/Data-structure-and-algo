#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.get();
	while(t--)
	{
		char str[2000];
		string s[1000];
		int j=0;
		char* ptr;
		
		cin.getline(str,2000);
		
		ptr = strtok(str,".");
		
		while(ptr!=NULL)
	    {
	    	s[j++]=ptr;
	    	
	    	ptr = strtok(NULL,".");
		}
		
		for(int i=j-1;i>=0;i--)
		{
			if(i==0)
			{
				cout<<s[i];
			}
			else
			{
		    	cout<<s[i]<<".";
			}
		
		}
		cout<<endl;
	}
}
