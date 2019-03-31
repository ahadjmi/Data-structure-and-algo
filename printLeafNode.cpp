#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	
	node(int data)
	{
		left=NULL;
		right=NULL;
		this->data=data;
	}
};

void createTree(node* &root)
{
	int data;
	
	cin>>data;
	
	if(data!=-1)
	{
		root=new node(data);
	}
	
	queue<node *> q;
	q.push(root);
	
	while(!q.empty())
	{
		
		
		node* top=q.front();
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

}
void printLeaf(node* root)
{
	if(root->left==NULL && root->right==NULL)
	{
		cout<<root->data<<" ";
		return;
	}
	
	printLeaf(root->left);
	printLeaf(root->right);
	
	return;
	
}

int main()
{
	node *root;
	createTree(root);
	printLeaf(root);
	
	return 0;
}
