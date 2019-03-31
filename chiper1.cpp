#include<iostream>
#include<string.h>

using namespace std;

class cipher
{
	public :
		
		string msg;
		int key,enc[50],d,alpha[42],n,temp[10];
		
		void input()
		{
			cout<<"Enter text message: ";
			getline(cin,msg);
			cout<<"Enter key: ";
			cin>>key;
			d=msg.length();
		}
		
		
		void process()
		{
			n='a';
			for(int i=0;i<26;i++)
			{
				alpha[i]=n;
				n++;
			}
			
			for(int i=0;i<d;i++)
			{
				for(int j=0;j<26;j++)
				{
					if(int(msg[i])==alpha[j])
					{
						temp[i]=(alpha[j]+key)%97+97;
						cout<<char(temp[i]);
						
					}
				}
			}
			
			
		}
};

int main()
{
	cipher c;
	c.input();
	c.process();
	
	return 0;
}

