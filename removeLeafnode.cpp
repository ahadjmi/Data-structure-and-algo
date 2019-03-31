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

node* removeLeaf(node* root)
{
	if(!root)
	{
		return NULL;
	}
	if(root->left==NULL && root->right==NULL)
	{
		node* temp=root;
		delete temp;
		return NULL;
	}
	
	root->left=removeLeaf(root->left);
	root->right=removeLeaf(root->right);
	
	return root;
}

void printData(node* root)
{
	if(!root)
	{
		return;
	}
	if(root->left==NULL)
	{
		cout<<"END";
	}
	else
	{
		cout<<root->left->data;
	
	}
	cout<<"=>"<<root->data<<"<=";
	if(root->right==NULL)
	{
		cout<<"END";
		
	}
	else
	{
		cout<<"=>"<<root->right->data;
		
	}
	cout<<endl;

		printData(root->left);
	
		printData(root->right);

	return;
}

int main()
{
	int d;
	cin>>d;
	node* root1;
	node*temp1;
	root1=new node(d);
	temp1=createTree(root1);
	node* temp=removeLeaf(temp1);
	printData(temp);

	return 0;
}
