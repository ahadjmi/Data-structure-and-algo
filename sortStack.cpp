#include<iostream>
#include<stack>
using namespace std;

void insertat(stack<int> &s,int t)
{
	if(s.empty() || t>s.top())
	{
		s.push(t);
		return;
	}
	int k=s.top();
	s.pop();
	
	insertat(s,t);
	s.push(k);
	
	return;
	
}
void sortStack(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}
	
	int t=s.top();
	s.pop();
	sortStack(s);
	insertat(s,t);
	
	return;
	
}

int main()
{
	int n,val;
	
	stack<int> s;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		s.push(val);
	}
	
	sortStack(s);
	
	for(int i=0;i<n;i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
}
