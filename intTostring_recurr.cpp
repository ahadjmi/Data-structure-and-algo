#include<iostream>
#include<string>
using namespace std;
int count=0;

void convert_count(char *num,char *out,int i,int j)
{
	if(num[i]=='\0')
	{
		out[j]='\0';
		//cout<<"ret";
	//	cout<<out<<", ";
		count++;
		return;
	}
	int digit=num[i]+'a'-1-48;
	out[j]=digit;
	convert_count(num,out,i+1,j+1);
	
	if(((num[i]-48)*10+(num[i+1]-48))<27 && num[i+1]!='\0' && num[i]!='\0')
	{
		int dig=(num[i]-48)*10+(num[i+1]-48)+'a'-1;
		out[j]=dig;
		convert_count(num,out,i+2,j+1);
	}
//	cout<<"kha";
	return;
}
void convert(char *num,char *out,int i,int j)
{
	if(num[i]=='\0')
	{
		out[j]='\0';
		//cout<<"ret";
		if(count!=1)
		{
			cout<<out<<", ";
		}
		else
		{
			cout<<out;
		}

		count--;
		return;
	}
	int digit=num[i]+'a'-1-48;
	out[j]=digit;
	convert(num,out,i+1,j+1);
	
	if(((num[i]-48)*10+(num[i+1]-48))<27 && num[i+1]!='\0' && num[i]!='\0')
	{
		int dig=(num[i]-48)*10+(num[i+1]-48)+'a'-1;
		out[j]=dig;
		convert(num,out,i+2,j+1);
	}
//	cout<<"kha";
	return;
}

int main()
{
	char num[100],out[100];
	
	cin>>num;
	
	convert_count(num,out,0,0);
	cout<<"[";
	convert(num,out,0,0);
	cout<<"]";



	
	return 0;
	
}
