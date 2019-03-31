bool find(node* root,int data)
{
	if(!root)
	{
		return false;
	} 
	if(root->data==data)return true;
	
	if(root->data < data) find(root->rigth,data);
	else find(root->left,data)Skip to content
 
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 @ahadjmi Sign out
5
8 4 utkarshnath/Launchpad_Sept_18
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Insights
Launchpad_Sept_18/Lecture_19/bst.cpp
d3f6783  21 minutes ago
@utkarshnath utkarshnath bst
     
91 lines (90 sloc)  1.71 KB
#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    node(int data){
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
        }else{
            if(it->left==NULL){
                it->left = temp;
                return;
            }
            it = it->left;
        }
    }
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
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    return;
}
int main(){
node * root = NULL;
addElement(&root,5);
addElement(&root,3);addElement(&root,8);
addElement(&root,1);
addElement(&root,7);
addElement(&root,10);
addElement(&root,4);
addElement(&root,5);
levelorder(root);
}
© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
Press h to open a hovercard with more details.;
	
	return false;
}
