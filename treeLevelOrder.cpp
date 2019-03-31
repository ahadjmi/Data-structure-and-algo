#include<iostream>
using namespace std;
int count=0;

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

void preorder(node* root)
{
	if(!root)
	{
		return;
	}
	
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void kth_level_print_count(node* root,int k)
{
	if(!root)
	{
		return ;
	}
	if(k==0)
	{
		return ;
	}
	
	kth_level_print_count(root->left,k-1);
	kth_level_print_count(root->right,k-1);
	// return left+right;
}

void kth_level_print(node* root,int k)
{
	if(!root)
	{
		return;
	}
	if(k==0)
	{
		
	
		{
			cout<<root->data<<", ";
		}
	
	}
	
	kth_level_print(root->left,k-1);
	kth_level_print(root->right,k-1);
	return;
}
void printLevel_count(node* root)
{
	if(!root)
	{
		return;
	}
	
	for(int i=0;i<height(root);i++)
	{
		kth_level_print_count(root,i);
		cout<<endl;
	}
}

void printLevel(node* root)
{
	if(!root)
	{
		return;
	}
	cout<<"[";
	for(int i=0;i<height(root);i++)
	{
		cout<<"[";
		kth_level_print(root,i);
		cout<<"]";
	}
	cout<<"]";
}

int main()
{
	int d;
	cin>>d;
	node* root;
	node*temp;
	root=new node(d);

	temp=createTree(root);
	
//	preorder(temp);
//	cout<<endl;
//	kth_level_print(temp,1);
  // printLevel_count(temp);
    printLevel(temp);
   
	return 0;
}
