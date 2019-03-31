#include<iostream>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    node(int data)
	{
    this->data = data;
    left = right = NULL;
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
        }
		else{
            if(it->left==NULL){
                it->left = temp;
                return;
            }
            it = it->left;
        }
    }
}
int height(node * root){
    if(!root){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}

bool checkbst1(node* root)
{
	if(!root)
	{
		return false;
	}
	vector<int> v;
	 v=inorder(root);
	 int max;
	while(v.empty())
	{
		max=v.front;
		v.pop_back();
		if(v.front>max)
		{
			return false;
		}
		
	}
	return true;
}
bool checkbst(node* root)
{
	if(!root)
	{
		return true;
	}
	
	
	bool lef=checkbst(root->left);
	bool rig=checkbst(root->right);
	
	int lh=height(root->left);
	int rh=height(root->right);
	
	if(abs(lh-rh)<=1)
	{
		return true;
	}
	
	if(lef || rig)
	{
		return true;
	}
	
	return false;
}

node* convertLL(node *root)
{
	if(!root)
	{
		return NULL;
	}
	node *head;
	convertLL(root->left);
	head=root;
	convertLL(root->right);
	
	
	
}

void levelorder(node * root){
    queue<node *>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        node * temp = q.front();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        q.pop();
    }
}
void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
    return;
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
    return;
}
vector<int> inorder(node * root,vector<int> v){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
    return vector;
}
int main(){
node * root = NULL;
addElement(&root,5);
addElement(&root,3);
addElement(&root,8);
addElement(&root,1);
addElement(&root,7);
addElement(&root,10);
addElement(&root,4);
addElement(&root,5);
levelorder(root);
cout<<endl;
cout<<checkbst1(root);
}
