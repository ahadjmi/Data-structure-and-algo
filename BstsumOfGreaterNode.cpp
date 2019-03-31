#include<iostream>
using namespace std;
int sum=0;
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

void sumNode(node* root)
{
	if(!root)
	{
		return;
	}
	
	sumNode(root->right);
	int temp=root->data;
	root->data=temp+sum;
	sum+=temp;
	sumNode(root->left);
	
	return;
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
			int n,val;
		node * root=NULL;
		cin>>n;
		
	     for(int i=0;i<n;i++)
		{
				cin>>val;
			addElement(root,val);
			
			
		}
			preorder(root);
				cout<<endl;
		sumNode(root);
			preorder(root);
			
			sum=0;

		
	}
	
	

	return 0;
}
