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

int count_data(node *head)
{
	node *temp;
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	
	return count;

}

int kthTerm(node* head,int k)
{
	while(k>0)
	{
		head=head->next;
		k--;
	}
	
	return head->data;
}

int main()
{
	node *head;
	head=createList();
	int count,n;
	count=count_data(head);
	cin>>n;
	
	cout<<kthTerm(head,count-n);
	
	return 0;
}
