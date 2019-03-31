#include<iostream>
#include<queue>
using namespace std;
struct node
{
	string data;
	node* left;
	node* right;
	
	node(string data)
	{
		left=NULL;
		right=NULL;
		this->data=data;
	}
};

void createTree(node* &root)
{
	string data;
	
	cin>>data;
	
	if(data!="false")
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
		if(data!="false")
		{
			node* left=new node(data);
			top->left=left;
			q.push(left);
		}
		
		cin>>data;
		if(data!="false")
		{
			node* right=new node(data);
			top->right=right;
			q.push(right);
		}
	}		

}
int numberOfNodes(node* root)
{
	if(!root)
	{
		return 0;
	}
	int left= numberOfNodes(root->left);
	int right= numberOfNodes(root->right);
	
	return left+right+1;
}

void preorder(node* root)
{
	if(!root)
	{
		return;
	}
	cout<<root->data<<" ";
	
	preorder(root->left);
	preorder(root->right);
	
	return;
}

void levelorder(node* root)
{
	
	if(!root)
	{
		cout<<"-1"<<endl;
	}
	
	queue<node *>q;
	q.push(root);
	
	while(!q.empty())
	{
		node* top=q.front();
		q.pop();
		
		cout<<top->data<<" ";
		if(top->left!=NULL)
		{
			q.push(top->left);
		}
		
		if(top->right!=NULL)
		{
			q.push(top->right);
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
	preorder(root);
	cout<<endl;
	cout<<numberOfNodes(root)<<endl;
	levelorder(root);
	printLeaf(root);
	
	return 0;
}
