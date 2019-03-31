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

void merge_LL(node* &head3,node* head1,node* head2)
{
	node* temp1=head1;
	node* temp2=head2;
	node* temp3;
	node* temp;

	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data < temp2->data)
		{
			if(head3==NULL)
			{
				head3=new node();
				head3->data=temp1->data;
				head3->next=NULL;
				temp3=head3;
				temp1=temp1->next;	
			
			}
			
			else
			{
				temp=new node();
				temp->data=temp1->data;
				temp->next=NULL;
				temp3->next=temp;
				temp3=temp;
				temp1=temp1->next;
			}
		}
		
		else
		{
			if(head3==NULL)
			{
				head3=new node();
				head3->data=temp2->data;
				head3->next=NULL;
				temp3=head3;
				temp2=temp2->next;	
				
			}
			
			else
			{
				temp=new node();
				temp->data=temp2->data;
				temp->next=NULL;
				temp3->next=temp;
				temp3=temp;
				temp2=temp2->next;
			}
			
		}
	}
	
	if(temp1!=NULL)
	{
		temp3->next=temp1;
	}
	
	else if(temp2!=NULL)
	{
		temp3->next=temp2;
	}
	
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
	node* head1=NULL;
	node* head2=NULL;
	node* head3=NULL;
	int n,m;
	
	int q=2;
	cin>>n;
	cin>>m;
	appendLL(head1,n);
	appendLL(head2,m);
	printLL(head1);
	cout<<endl;
	printLL(head2);

	merge_LL(head3,head1,head2);
	cout<<endl;
	
	printLL(head3);
	
	
	return 0;
}
