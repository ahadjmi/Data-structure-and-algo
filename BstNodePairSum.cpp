#include<iostream>
#include<set>
using namespace std;
set<int> s;
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

void checkPairSum(node* root,int val)
{
	if(root==NULL)
	{
		return;
	}
	
	checkPairSum(root->left,val);
	if(s.count(val-root->data)==1 && val!=2*root->data)
	{
		cout<<root->data<<" "<<val-root->data<<endl;
		s.erase(root->data);
		s.erase(val-root->data);
	}
	
	checkPairSum(root->right,val);
	
	return;
}

int main()
{
	
	int n,val;
		int arr[1000];
		cin>>n;
		node* root=NULL;
		for(int i=0;i<n;i++)
		{
			
			cin>>arr[i];
			s.insert(arr[i]);
		    
		}
		root=balancedBst(arr,0,n-1);
		
		cin>>val;
		
		checkPairSum(root,val);
		
	
	
		
	return 0;
	
}
