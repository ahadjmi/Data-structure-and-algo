#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int,vector<int>,greater<int> > pmin;
	int n,val;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>val;
		pmin.push(val);
	}
	while(val!=-1)
	{
		cin>>val;
		if(val>pmin.top())
		{
			pmin.pop();
			pmin.push(val);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<pmin.top()<<" ";
		pmin.pop();
	}
	
	return 0;
	
	
}
