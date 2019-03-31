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
int height(node * root){
    if(!root){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}

void printLevel(node* root,int val,int i)
{
	if(!root)
	{
		return;
	}
	
	if(val==0)
	{
		m[i].push_back(root->data);
	}
	
	printLevel(root->left,val-1,i);
	printLevel(root->right,val-1,i);
	
	return;
}

void leftView(node* root)
{
	for(int i=0;i<=height(root);i++)
	{
		printLevel(root,i,i);
	}
}





void printTop()
{
	map<int,vector<int> >:: iterator it;
    for(it = m.begin();it!=m.end();it++)
	{
        
        cout<< it->second[0]<<" ";
    }
}  
int main()
{
	node * root = btree();
	topView(root);

	printTop();
	return 0;
}


