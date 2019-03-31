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
	node* pre=NULL;
	node* curr=head;
	node* nxt=head->next;
	
	
	
	while(nxt->next!=NULL)
	{
		
		curr->next=pre;
     	pre=curr;
    	curr=nxt;
    	nxt=nxt->next;
	}
	
	curr->next=pre;
     	pre=curr;
    	curr=nxt;
    	curr->next=pre;
     head=curr;
	
	return head;	
	
	
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
