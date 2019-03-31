#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char arr[16],str[10][10];
	string name = "Abdul Ahad Khan";
	char *point;
	
	point=arr;
	
	for(int i=0;i<16;i++)
	{
		*point=name[i];
		point++;
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			str[i][j]='/0';
		}
	}
	int i=0;
	
	for(i=0;i<10;i++)
	{
	
		for(int j=0;j<10;j++)
		{
			if(arr[j] != ' ')
			{
				str[i][j]=arr[j];
			}
			
			else{
				break;
			}
		}
    }
	
	for(int j=0;j<6;j++)
	{
		cout<<str[j];
	}
	
	return 0;
}
