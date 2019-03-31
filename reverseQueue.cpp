#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q)
{
	if(q.empty())
	{
		return;
	}
	
	int top=q.front();
	q.pop();
	reverseQueue(q);
	q.push(top);

}

int main()
{
	queue<int> q;
	int n,val;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		q.push(val);
	}
	
	reverseQueue(q);
	
	for(int i=0;i<n;i++)
	{
		cout<<q.front()<<" ";
	    q.pop();
	}
	
	
	cout<<endl;
	
	return 0;
}
