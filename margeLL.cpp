#include<iostream>

using namespace std;
struct node
{
	int data;
	node *next;
};

void createLL(node *&head,int n)
{
	
	int data;
	
	cin>>data;
	node *it;
	it=head;
	
	head->data=data;
	head->next=NULL;
	
	for(int i=0;i<n-1;i++)
	{
		cin>>data;
		node *temp=new node();
		temp->data=data;
		temp->next=NULL;
		it->next=temp;
		it=it->next;
	}
}

void mergeLL(node *head1,node *head2,node *&head3)
{
	
	node *it;
	it=head3;
	
	if(head1->data > head2->data)
	{
		it->data=head2->data;
	    it->next=NULL;
	    it=it->next;
	}
	
	else
	{
		
	}
	
	
	while(head1!=NULL && head2!=NULL)
	{
		temp=new node();
		if(head1->data > head2->data)
		{
			temp->data=head2->data;
			temp->next=NULL;
			head2=head2->next;
		}
	}
}

void printLL(node *head)
{
	node* temp;
	temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
}

int main()
{
	node *head1=new node();
	node *head2=new node();
	
	int n,m;
	
	cin>>n;
	cin>>m;
	
	createLL(head1,n);
	createLL(head2,m);
	
	node *head3=new node();
	
	margeLL(head1,head2,head3);
	
	printLL(head1);
	printLL(head2);
	
	return 0;
}
