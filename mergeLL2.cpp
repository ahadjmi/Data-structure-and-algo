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


node* merge_LL(node* a,node*b)
{
	if(!a)
	{
		return b;
	}
	if(!b)
	{
		return a;
	}
	node* c;
	if(a->data < b->data)
	{
		c=a;
	   c->next=	merge_LL(a->next,b);
	}
	
	else
	{
		c=b;
		c->next=merge_LL(a,b->next);
	}

    return c;
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
	
	
	int q;
	cin>>q;
	while(q>0)
	{
		node* head1=NULL;
    	node* head2=NULL;
    	int n,m;
		
				cin>>n;
				appendLL(head1,n);
	
				cin>>m;
				appendLL(head1,m);
		
	     	node* head3=merge_LL(head1,head2);
	
   
           printLL(head3);
			
		q--;
	}
	
	
	
	
	return 0;
}
