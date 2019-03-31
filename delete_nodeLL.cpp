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

void deleteNode(node* &head,int val)
{
	if(val==0)
	{
		node* temp=head;
		head=head->next;
		
		delete temp;
		
		return;
	}
	node* parent=head;
	val--;
	while(val>0)
	{
		parent=parent->next;
		val--;
	}
	node* temp1=parent->next;
	parent->next=temp1->next;
	temp1->next=NULL;
	delete temp1;
	
}
void printLL(node *head)
{
	node* temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}

int main()
{
	node* head=NULL;
	int n,q,del;
	
	cin>>n;
	cin>>q;
	appendLL(head,n);

	
	for(int i=0;i<q;i++)
	{
		cin>>del;
		deleteNode
		(head,del);
		printLL(head);
	}
	
	return 0;
}
