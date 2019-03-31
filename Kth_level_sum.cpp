#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	
	node(int data)
	{
		left=NULL;
		right=NULL;
		this->data=data;
	}
};

void createTree(node* &root)
{
	int data;
	
	cin>>data;
	
	if(data!=0)
	{
		root=new node(data);
	}
	
	queue<node *> q;
	q.push(root);
	
	while(!q.empty())
	{
		
		
		node* top=q.front();
		q.pop();
		cin>>data;
		if(data!=0)
		{
			node* left=new node(data);
			top->left=left;
			q.push(left);
		}
		
		cin>>data;
		if(data!=0)
		{
			node* right=new node(data);
			top->right=right;
			q.push(right);
		}
	}		

}


int kth_level_print(node* root,int k,int sum=0)
{
	
	if(!root)
	{
		return 0;
	}
	if(k==0)
	{
		sum+=root->data;
	}
	
	kth_level_print(root->left,k-1,sum);
	kth_level_print(root->right,k-1,sum);
	return sum;
	
}

int main()
{	
	node *root;
	int k;
	createTree(root);
	cin>>k;
	cout<<kth_level_print(root,k,0);
	
	return 0;
}
