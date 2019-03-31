#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *createList()
{
	node *head=new node();
	int data;
	cout<<"Enter data or -1 for exit"<<endl;
	cin>>data;
	node *it;
	it=head;
	
	if(data!=-1)
	{
		
	    it->data=data;
	    it->next=NULL;
	}
	

	cin>>data;
	while(data!=-1)
	{
		node *temp = new node();
		temp->data=data;
		temp->next=NULL;
		it->next=temp;
		it=it->next;
			
		cin>>data;
		
	}
	
	return head;
	
}

void print_data(node *head,int n)
{
	node *temp;
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	int k=count-(n-1);
	
	node *temp2=head;
	
	while(--k)
	{
		temp2=temp2->next;
	}
	
	cout<<temp2->data<<endl;
	
	return;
}

int main()
{
	node *head;
	head=createList();
	
	print_data(head,4);
	
	return 0;
}
