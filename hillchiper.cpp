#include<iostream>
#include<string.h>

using namespace std;

class cipher
{
	public :
		string key,msg;
		char str[3];
		int inv[3][3],vmsg[3],det,enc[3];
		int l,d,k,n,t,u,alpha[36];
		
		
		void input()
		{
			cout<<"Enter text message: ";
			getline(cin,msg);
			cout<<"Enter key: ";
			cin>>key;
			d=msg.length();
			k=0;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					inv[i][j]=(key[k++]-48);
					
				}
					
			}
			
			det=inv[0][0]*(inv[1][1]*inv[2][2]-inv[1][2]*inv[2][1])-inv[0][1]*(inv[1][0]*inv[2][2]-inv[1][2]*inv[2][0])+inv[0][2]*(inv[1][0]*inv[2][1]-inv[1][1]*inv[2][0]);
			
			cout<<"determinent: "<<det<<endl;
			if(det==0)
			{
				cout<<"Invalid key \nPlease re-enter: \n";
			}
		
		}
		
		void process()
		{
			
			t='a';
			for(int i=0;i<26;i++)
			{
				alpha[i]=t;
				t++;
			}
			
			u='1';
			for(int i=26;i<36;i++)
			{
				alpha[i]=u;
				u++;
			}
			
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<36;j++)
				{
					if(int(msg[i])==alpha[j])
					{
						vmsg[i]=j;
					}
				}
				   
			}
			for(int i=0;i<3;i++)
			{
				enc[i]=0;
				for(int j=0;j<3;j++)
				{
					enc[i] += inv[i][j]*vmsg[j];
					
				}
				enc[i]=enc[i]%36;
			}
			
			for(int i=0;i<3;i++)
			{
				str[i]=char(alpha[enc[i]]);
			}
			
		}
		
		
		void output()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<inv[i][j]<<"  ";
				}
				
				cout<<endl;
			}
			
			cout<<"\nVector matrix is: ";
			for(int j=0;j<3;j++)
		    {
			    cout<<vmsg[j]<<"  ";
		    }
				
		    cout<<endl;
		    for(int j=0;j<3;j++)
		    {
			    cout<<enc[j]<<"  ";
		    }
		    
		    cout<<endl;
		    for(int j=0;j<3;j++)
		    {
			    cout<<str[j];
		    }
				
				
			
		}
		
		
		
};
int main()
{
	cipher c;
	c.input();
	c.process();
	c.output();
	
	return 0;
}
