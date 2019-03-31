#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
map<int,vector<int> > m;
struct node
{
	 int data;
	 node* left;
	 node* right;
	 
	 node(int data)
	 {
	 	this->data=data;
	 	left=NULL;
	 	right=NULL;
	 }
};

node *btree()
{

	int data;
	
	cin>>data;
	node* root;
	
	if(data!=-1)
	{
		root=new node(data);
	}
	
	queue<node *> q;
	q.push(root);
	
	while(!q.empty())
	{
		node *top=q.front();
		q.pop();
		
		cin>>data;
		
		if(data!=-1)
		{
			node* left=new node(data);
			top->left=left;
			q.push(left);
		}
		cin>>data;
		
		if(data!=-1)
		{
			node* right=new node(data);
			top->right=right;
			q.push(right);
		}
	}
	
	return root;
	
	
}


void topView(node* root,int val)
{
	if(!root)
	{
		return;
	}
	
	m[val].push_back(root->data);
	topView(root->left,val-1);
	topView(root->right,val+1);
	
	return;
}

void printTop()
{
	map<int,vector<int> >:: iterator it;
    for(it = m.begin();it!=m.end();it++)
	{
        for(int i=0;i<it->second.size();i++)
        {
        	cout<< it->second[i]<<" ";
		}
		
		cout<<endl;
        
    }
}  
int main()
{
		int n;
	cin>>n;
	node * root = btree();
	topView(root,0);


	printTop();
	return 0;
}


