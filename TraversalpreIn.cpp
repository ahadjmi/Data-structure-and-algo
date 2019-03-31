#include<iostream>
using namespace std;
int count=0;
struct node
{
	int data;
	node* left;
	node* right;
	
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
		
	}
};

node* traInPre(int *in,int *pre,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}
	static int i=0;
	
	node* root=new node(pre[i]);
	int index;
	for(int j=0;j<=e;j++)
	{
		if(pre[i]==in[j])
		{
			index=j;
		}
	}
	i++;
	
	root->left=traInPre(in,pre,s,index-1);
	root->right=traInPre(in,pre,index+1,e);
	
	return root;
	
}
int SubBst(node* root)
{
	if(!root)
	{
		return -1;
	}
	if(root->left==NULL && root->right==NULL)
	{
		return root->data;
	}
	
	int left=SubBst(root->left);
	if(root->data >= left)
	{
		count++;
	}
	int right=SubBst(root->right);
	if(root->data < right)
	{
		count++;
	}
	
	if(root->data < left && root->data >= right)
	{
		count=0;
	}
	
	return root->data;
}

void postorder(node* root)
{
	if(!root)
	{
		return;
	}
	
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
	return;
}

int main()
{
	int in[100],pre[100],n;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>pre[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
    node* root=traInPre(in,pre,0,n-1);
    SubBst(root);
    cout<<count;
	return 0;
}

