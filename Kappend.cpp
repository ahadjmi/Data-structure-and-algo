#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
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

void kappend(node* &head,int m)
{
	node* temp1=head;
	node* temp2=head;
	node* temp=head;
	
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
		
	}

	
	while(m>1)
	{
		temp2=temp2->next;
	
		m--;
	}
	
	
	head=temp2->next;
	temp2->next=NULL;
	temp1->next=temp;
	
	
}

void print_LL(node *head)
{
	while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



int main()
{
	int n,k,m;
	cin>>n;
	
	node *head=NULL;
	
	
	appendLL(head,n);
	
	cin>>k;
	if(k==0)
	{
		print_LL(head);
	}
	else
	{
		m=n-k;
    	kappend(head,m);

     	print_LL(head);
	}
	
	
	return 0;
}
