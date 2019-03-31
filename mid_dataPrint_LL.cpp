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

void mid_data(node *head)
{
	node *temp;
	node *midtemp;
	
	temp=head;
	midtemp=head;
	while(true)
	{
		temp=temp->next;
		
		if(temp==NULL)
		{
			break;
		}
		
		temp=temp->next;
		
		if(temp==NULL)
		{
			break;
		}
		
		midtemp=midtemp->next;
			
		
		
	}
	cout<<midtemp->data;
}

int main()
{
	node *head=createList();
	mid_data(head);
	
	return 0;
	
}
