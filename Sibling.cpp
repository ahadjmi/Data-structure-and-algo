#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
map<int,vector<int> > m;
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

void sibling(node* root)
{
	if(!root)
	{
		return;
	}
	
	if(root->left!=NULL && root->right==NULL)
	{
		cout<<root->left->data<<" ";
	}
	
	if(root->left==NULL && root->right!=NULL)
	{
		cout<<root->right->data<<" ";
	}
	
	sibling(root->left);
	sibling(root->right);
	
	return;
}



int height(node * root){
    if(!root){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}

void printLevel(node* root,int val,int i)
{
	if(!root)
	{
		return;
	}
	
	if(val==0)
	{
		m[i].push_back(root->data);
	}
	
	printLevel(root->left,val-1,i);
	printLevel(root->right,val-1,i);
	
	return;
}

void leftView(node* root)
{
	if(!root)
	{
		return;
	}
	for(int i=0;i<=height(root);i++)
	{
		printLevel(root,i,i);
	}
}

void printTop()
{
	map<int,vector<int> >:: iterator it;
	cout<<"[";
    for(it = m.begin();it!=m.end();it++)
	{
		
       if((it->second.size()-1)==0) 
       {
       	 cout<< it->second[0]<<" ";
	   }
       
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
	sibling(temp);

	return 0;
}


