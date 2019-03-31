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

void kth_level_print_odd(node* root,int k)
{
	if(!root)
	{
		return;
	}
	if(k==0)
	{
		cout<<root->data<<" ";
	}
	
	kth_level_print_odd(root->left,k-1);
	kth_level_print_odd(root->right,k-1);
	return;
}

void kth_level_print_even(node* root,int k)
{
	if(!root)
	{
		return;
	}
	if(k==0)
	{
		cout<<root->data<<" ";
	}
	
	
	kth_level_print_even(root->right,k-1);
	kth_level_print_even(root->left,k-1);
	return;
}

void printLevel(node* root)
{
	if(!root)
	{
		return;
	}
	
	for(int i=0;i<height(root);i++)
	{
		if(i%2!=0)
		{
			kth_level_print_even(root,i);
		    cout<<endl;
		}
	    	
		else
		{
			kth_level_print_odd(root,i);
			cout<<endl;
		}
		    
	}
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
    printLevel(temp);
	return 0;
}
