#include<iostream>
#include<set>
using namespace std;
set<string> s;
void permutation(char *in,int i)
{
	if(in[i]=='\0')
	{
		s.insert(in);
		return;
	}
	
	for(int k=i;in[k]!='\0';k++)
	{
			
		swap(in[i],in[k]);
		permutation(in,i+1);
		swap(in[i],in[k]);
	}
	
	return;
	
}

int main()
{
	char in[100];
	cin>>in;
	
	permutation(in,0);
	
	set<string>::iterator it = s.begin();
	
	for(it;it!=s.end();++it)
	{
		cout<<*it<<endl;
	}
	
	return 0;
}
