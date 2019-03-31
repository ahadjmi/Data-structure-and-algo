#include<iostream>
#include<stack>
using namespace std;

void isBalanced(char *str,int i,stack<char> &s)
{
	if(str[i]=='\0' && s.empty())
	{
		cout<<"true"<<endl;
		return;
	}
	
	if(str[i]=='\0' && !s.empty())
	{
		cout<<"false"<<endl;
		return;
	}
	
	
	if(str[i]=='(' || str[i]=='{' || str[i]=='[')
	{
		s.push(str[i]);
		
	}
	
	if((str[i]==')' && s.top()=='(') || (str[i]==']' && s.top()=='[') || (str[i]=='}' && s.top()=='{') )
	{
		s.pop();
		
	}
	
	isBalanced(str,i+1,s);
	
	return;
	
	

} 

int main()
{
	char str[100];

	stack<char> s;
	cin.getline(str,100);
	
	isBalanced(str,0,s);
	
//	cout<<check;
	
	return 0;
}
