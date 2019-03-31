#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};


void appendLL(node* &head,int n)
{
	int val;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		if(head==NULL)
	    {
	    	head=new node();
        	head->data=val;
        	head->next=NULL;
     	}
	
    	else
    	{
	     	node* it=head;
	        node *temp=new node();
	
        	while(it->next!=NULL)
	        {
	    	    it=it->next;
     	    }
	
        	temp->data=val;
        	temp->next=NULL;
        	it->next=temp;
       	}
	}
	
	
	
}

node* printReverse(node* head)
{
	if(!head)
	{
		return NULL;
	}
	if(head->next==NULL)
	{
		return head;
	}
	
	node* temp=printReverse(head->next);
	node* curr=head;
	curr->next->next=curr;
	curr->next=NULL;	
	return temp;
}

void printLL(node *head)
{
	node* temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	node* head=NULL;
	int n;
	cin>>n;
	
	appendLL(head,n);

	node* root= printReverse(head);
	printLL(root);
	
	return 0;
}
