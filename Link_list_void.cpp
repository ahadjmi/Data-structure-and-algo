#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};


void create_Link_list(node **head)
{
	int data;
	cout<<"Enter data and -1 for exit"<<endl;
	cin>>data;
	
	if(data!=-1)
	{
		(*head)->data=data;
		(*head)->next=NULL;
	}
	node *it=(*head);
	cin>>data;
	while(data!=-1)
	{
		node *temp=new node();
		temp->data=data;
		temp->next=NULL;
		it->next=temp;
		it=it->next;
		cin>>data;
	}
}

void print_data(node *head)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<", ";
		temp=temp->next;
	}
	cout<<"END";
}

int main()
{
	node *head;
	
	
	
	
	create_Link_list(&head);
	
	print_data(head);
	
	return 0;
}
