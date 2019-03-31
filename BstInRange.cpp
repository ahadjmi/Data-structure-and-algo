#include<iostream>
using namespace std;
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

void addElement(node ** root,int data){
    if(*root==NULL){
        *root = new node(data);
        return;
    }
    node * temp = new node(data);
    node * it = *root;
    while(it!=NULL){
        if(it->data<data){
            if(it->right==NULL){
                it->right = temp;
                return;
            }
            it = it->right;
        }else{
            if(it->left==NULL){
                it->left = temp;
                return;
            }
            it = it->left;
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

pair<int,bool> findrange(node* root,int ll,int ul)
{
	if(root==NULL)
	{
		pair<int,bool> p;
		p.first=0;
		p.second=true;
		return p;
	}
	pair<int,bool> left=findrange(root->left,ll,ul);
	pair<int,bool> right=	findrange(root->right,ll,ul);
	
	if((root->data >= ll) && (root->data <=ul) && left.second==true && right.second==true)
	{
		pair<int,bool> m;
		m.first=(left.first + right.first) +1;
		m.second=true;
	     return m;
	}
	
	pair<int ,bool> k;
	k.first=left.first+right.first;
	k.second=false;
	return k;
}

void preorder(node* root)
{
	if(!root)
	{
		return ;
	}
	cout<<root->data<<" ";
	
	preorder(root->left);
	preorder(root->right);
}


int main()
{
	

		int n,val,ul,ll;
		int arr[1000];
		cin>>n;
		node* root=NULL;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		    
		}
		root=balancedBst(arr,0,n-1);
		cin>>ll>>ul;
	
    pair<int,bool> l=findrange(root,ll,ul);
	cout<<l.first<<endl;
		
	return 0;

}
		
