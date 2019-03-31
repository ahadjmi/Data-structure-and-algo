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

node *btree()
{

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
		
		cin>>data;
		
		if(data!=-1)
		{
			node* left=new node(data);
			top->left=left;
			q.push(left);
		}
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


void topView(node* root,int val)
{
	if(!root)
	{
		return;
	}
	
	m[val].push_back(root->data);
	topView(root->left,val-1);
	topView(root->right,val+1);
	
	return;
}

void printTop()
{
	map<int,vector<int> >:: iterator it;
    for(it = m.begin();it!=m.end();it++)
	{
        
        cout<< it->second[0]<<" ";
    }
} 


//int countleft(node* A)
// {
//     if(!A)
//     {
//         return 0;
//     }
//     int cont=countleft(A->left);
//     
//     return cont+1;
// }
void vorder(node* A,vector<vector<int> > &v,int n)
{
    if(!A)
    {
        return;
    }
    
    v[n].push_back(A->data);
    vorder(A->left,v,n--);
    vorder(A->right,v,n++);
    
    return;
}
vector<vector<int> > verticalOrderTraversal(node* A) {
    
   
    vector<vector<int> > v;
    
   // int c=countleft(A);
    vorder(A,v,0);

    
    
    return v;
} 

void print(vector<vector<int> > v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j];
			
		}
		
		cout<<endl;
	}
}

int main()
{
	node * root = btree();
	
	 vector<vector<int> > d;
	 d=verticalOrderTraversal(root);
//	topView(root,0);

	print(d);
	return 0;
}


