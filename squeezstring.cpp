#include<iostream>
using namespace std;
void squeez(char str[100])
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			int j=i;
			while(str[j]!='\0')
			{
				str[j]=str[j+1];
				j++;
				
			}
			
		}
		i++;
		
	}
	
	cout<<str;
}
int main()
{
	char a[100];
	
	cin.getline(a,100);
	
	squeez(a);
	
}
