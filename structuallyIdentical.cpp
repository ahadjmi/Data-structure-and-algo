#include<iostream>
using namespace std;
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

node* createTree(node* root)
{
	int data;
	string flag;
	cin>>flag;
	if(flag=="false")
	{
		root->left==NULL;
	}
	else
	{
		
		cin>>data;
		node* temp=new node(data);
		root->left=createTree(temp);
	}
	
	cin>>flag;
	if(flag=="false")
	{
		root->right==NULL;
	}
	else
	{
		
		cin>>data;
		node* temp=new node(data);
		root->right=createTree(temp);
	}
	
	return root;
}

int height(node* root)
{
	if(!root)
	{
		return 0;
	}
	
	int left=height(root->left);
	int right=height(root->right);
	
	return max(left,right)+1;
}

bool compare(node* root1,node* root2)
{
	if(!root1 && !root2)
	{
		return true;
	}
	if((root1==NULL && root2!=NULL) || (root1!=NULL && root2==NULL))
	{
		return false;
	}

	
	int left=compare(root1->left,root2->left);
	int right=compare(root1->right,root2->right);
	
	if(left && right)
	{
		return true;
	}
	
	return false;
	
}

int main()
{
	int d;
	cin>>d;
	node* root1;
	node*temp1;
	node*temp2;
	root1=new node(d);
	temp1=createTree(root1);
	cin>>d;
	node* root2=new node(d);

	bool flag;
	temp2=createTree(root2);
	
	flag=compare(temp1,temp2);
	if(flag==1)
	{
		cout<<"true";
	}
	
	else
	{
		cout<<"false";
	}

	return 0;
}
