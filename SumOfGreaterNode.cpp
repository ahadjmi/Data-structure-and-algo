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

node* balancedBst(int arr[1000],int s,int end)
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

void sumNode(node* root)
{
	if(!root)
	{
		return ;
	}
	        
			sumNode(root->right);
			int temp=root->data;
        	root->data=sum;
        	sum+=temp;
	        sumNode(root->left);
	

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

void printLevel(node* root)
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
	
		int n,val;

	
		node * root;
		cin>>val;
		
		while(val!=-1)
		{
		
			addElement(root,val);
				cin>>val;
	
			
		}
//			preorder(root);
		sumNode(root);
		printLevel(root);

	return 0;
}
