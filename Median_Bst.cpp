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

void median(node*root,int n)
{
	if(!root)
	{
		return;
	}
	
	cout<<root->data<<" ";
	if(n%2!=0)
	{
		cout<<root->right->data<<" ";
	}
	

}

int main()
{
	
		int n;
	    int arr[100];
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		
		node* root=balancedBst(arr,0,n-1);
		
		median(root,n-1);
		

	return 0;
}
