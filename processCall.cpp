#include<iostream>
#include<queue>

using namespace std;
int main()
{
	queue<int> q1,q2;
	int n,val,call;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>call;
		q1.push(call);
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>val;
		q2.push(val);
	}
	int count=0;
	
	while(true)
	{
		if(q2.empty() || q1.empty())
		{
		
			break;
		}
		
		if(q1.front()==q2.front())
		{
			q1.pop();
			q2.pop();
			count++;
		}
		
		else
		{
			int x=q1.front();
			q1.pop();
			q1.push(x);
			count++;
		}
		
	}
	
	cout<<count;
	
	return 0;
}
