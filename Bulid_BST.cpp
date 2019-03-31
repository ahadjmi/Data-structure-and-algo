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

node* balancedBst(int arr[100],int s,int end)
{
	if(s>end)
	{
		return NULL;
	}
	int mid;
	mid=(s+end)/2;
	node* root = new node(arr[mid]);
	root->left=balancedBst(arr,s,mid-1);
	root->right=balancedBst(arr,mid+1,end);
	
	return root;
}

void addElement(node* &root,int data)
{
	if(root==NULL)
	{
		root=new node(data);
		return;
	}
	
	node* temp=new node(data);
	node* it=root;
	
	while(it)
	{
		if(it->data < data)
		{
			if(it->right==NULL)
			{
				
				it->right=temp;
				return;
			}
			
			it=it->right;
		}
		
		else
		{
			if(it->left==NULL)
			{
			   
				it->left=temp;
				return;
			}
			it=it->left;
		}
	}
}

void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
	    int arr[100];
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		
		node* root=balancedBst(arr,0,n-1);
		
		preorder(root);
		
	}
	return 0;
}
