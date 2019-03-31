#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *find_element(node *head,int n)
{
	node *temp=head;
	if(temp==NULL)
	{
		return NULL;
	}
	
	if(temp->data==n)
	{
		return temp;
	}
	
	find_element(temp->next,n);
}

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

int main()
{
	node *head=createList();
	
	int n;
	cin>>n;
	
	node *temp=find_element(head,n);
	
	cout<<temp->data<<endl;
	cout<<temp->next->data<<endl;
	
	return 0;
	
	
}
