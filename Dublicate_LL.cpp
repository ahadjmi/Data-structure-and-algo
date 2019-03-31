#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
	
};

void deleteNode(node* head,node* temp)
{
	node* parent=head;
	
	while(parent->next!=temp)
	{
		parent=parent->next;
	}
	
	if(parent->next->next==NULL)
	{
		node* temp=parent->next;
		parent->next=NULL;
		delete temp;
		return;
	}
	
	node* temp1=parent->next;
	parent->next=temp1->next;
	temp1->next=NULL;
	delete temp1;
	
}

node* rm_dublicate(node* &head)
{
	node* temp1=head;
	node* temp2=head;
	
	while(temp1->next->next!=NULL)
	{
	//	cout<<"s";
		temp2=temp1->Next;
		while(temp2!=NULL)
		{
	//		cout<<"hh";
			if((temp1->data)==(temp2->data))
			{ 
			    deleteNode(temp2);
		
				continue;	
			}
			
			temp2=temp2->next;
			
		}
		
		temp1=temp1->next;
	}
	
	
}

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
	
	
	int q;
	cin>>q;
	
	while(q>0)
	{
		node* head=NULL;
		int n;
		cin>>n;
		
		
	
		appendLL(head,n);
		printLL(head);
		rm_dublicate(head);

	    printLL(head);
	//	printLL(head);
		q--;
	}
//	cout<<"shah";

	
	return 0;
}
