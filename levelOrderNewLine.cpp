#include<iostream>
#include<queue>
using namespace std;
struct node
{
	string data;
	node* left;
	node* right;
	
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}

};

node* createTree(node* root)
{
	string flag;
	cin>>flag;
	
	if(flag=="false")
	{
		return NULL;
	}
	
	int data;
	cin>>data;
	root=new node(data);
	root->left=createTree(root->left);
	root->right=createTree(root->right);
	
	return root;

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
int main()
{
	int data;
	cin>>data;
	node* root=new node(data);
	node* temp=createTree(root);
	
	preorder(temp);
	
	return 0;
	
}
