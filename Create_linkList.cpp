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
	cout<<"Enter data or -1 for exit";
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

void print_data(node *head)
{
	node *temp;
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}

int main()
{
	node *head;
	head=createList();
	
	print_data(head);
	
	return 0;
}
