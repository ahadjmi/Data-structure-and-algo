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

void intersect(node* head1,node* head2)
{
	bool flag=0;
	node*temp;
	while(head1!=NULL)
	{
	
		temp=head2;
		while(temp!=NULL)
		{
			if((head1->data) == (temp->data))
			{
			
				cout<<temp->data<<endl;
				return;
			
			}
			
			temp=temp->next;
		}
		head1=head1->next;
	}
	
	if(flag==0)
	{
		cout<<"-1"<<endl;
	}
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
	
	
	
		node* head1=NULL;
    	node* head2=NULL;
    	int n,m;
		
				cin>>n;
				appendLL(head1,n);
	            
				cin>>m;
				appendLL(head2,m);
	
	     	intersect(head1,head2);
	
	return 0;
}
