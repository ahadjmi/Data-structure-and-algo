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
	 	this->data=data;
	 	left=NULL;
	 	right=NULL;
	 }
};

node *btree()
{
	cout<<"Enter data, -1 if empty"<<endl;
	int data;
	
	cin>>data;
	node* root;
	
	if(data!=-1)
	{
		root=new node(data);
	}
	
	queue<node *> q;
	q.push(root);
	
	while(!q.empty())
	{
		node *top=q.front();
		q.pop();
		cout<<"Enter left of "<<top->data<<endl;
		cin>>data;
		
		if(data!=-1)
		{
			node* left=new node(data);
			top->left=left;
			q.push(left);
		}
		cout<<"Enter right of"<<top->data<<endl;
		cin>>data;
		
		if(data!=-1)
		{
			node* right=new node(data);
			top->right=right;
			q.push(right);
		}
	}
	
	return root;
	
	
}

void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	
		postorder(root->right);
	cout<<root->data<<" ";

	return;
}

int NodesGreater(node *root,int x)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int left=NodesGreater(root->left,x);
    	int right=NodesGreater(root->right,x);

	
	if(x<root->data)
	{
		return 1+left+right;
	}
	
	return left+right;
	
}

node *sumdata(node* root)
{
	if(root==NULL)
	{
		return NULL;
	}
	
	if(root->left==NULL && root->right==NULL)
	{
		return root;
	}
	
	if(root->left==NULL)
	{
		if(root->data > root->right->data)
		{
			return root;
		}
	}
	
	if(root->right==NULL)
	{
		if(root->data > root->right->data)
		{
			return root;
		}
	}
	
	node* left=sumdata(root->left);
	node* right=sumdata(root->right);
	
	int sum=left->data + right->data +root->data;
	
	

}

int degree(node* root)
{
	int c;
	if(root->left)
	{
		c++;
	}
	
	if( root->right)
	{
		c++;
	}
	return c;
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

void populate(node* root,int d)
{
	if(root==NULL)
	{
		return;
	}
	
//	root->depth=depth;
}

int depht(node* root,int k)
{
	queue<node *> q1,q2;
	while(k--)
	{
		q1.push(root);
		
		if(q1.empty())
		{
			while(!q2.empty())
			{
				q1.push(q2.front());
				q2.pop();
			}
		}
		
		else
		{
			while(!q1.empty())
			{
				node* top=q1.front();
				if(q1.front()->left)
				{
					q2.push(q1.front()->left);
				}
				
				q1.pop();
			}
		}
	}
	while(!q1.empty())
	{
		cout<<q1.front()->data;
	}
	
}

bool findnode(node* root,int val)
{
	if(!root)
	{
		return false;
	}
	
	if(root->data==val)
	{
		return true;
	}
	
	bool left=findnode(root->left,val);
	if(left)return true ;
	bool right=findnode(root->right,val);
	if(right) return true;
	
	
	return false;
}

node* mirrtree(node* root)
{
	if(!root)
	{
		;
	}
	node* temp=new node(root->data);
	
	
	temp->right=mirrtree(root->left);
	temp->left=mirrtree(root->right);
	
	return temp;
	
	
}

int main()
{
	node * root = btree();
	node* newroot;
	
	int x,count;
	postorder(root);
//	cout<<"Enter X"<<endl;
//	cin>>x;
	
//	count=NodesGreater(root,x);
//	cout<<count;
	
//	cout<<degree(root)<<endl;
	//cout<<height(root,2)<<endl;
//	cout<<findnode(root,5);
	newroot=mirrtree(root);
	postorder(newroot);
	
	return 0;
}
