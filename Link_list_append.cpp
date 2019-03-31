#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

void Link_list(node *&head,int n)
{
	int data,flag=1,index;
	node* it;
	
	for(int i=0;i<n;i++)
	{
		cin>>data;
		node* temp=new node();
		if(flag==1)
		{
			temp->data=data;
			temp->next=NULL;
			head=temp;
			it=temp;
			flag--;
		
		}
		
		else
		{
			temp->data=data;
			temp->next=NULL;
			it->next=temp;
			it=it->next;
		}
	}
	
	cin>>index;
	
	node *temp1=head;
	node *temp2=head;
	node *temp3=head;
	
	while(temp3->next!=NULL)
	{
		temp3=temp3->next;
	}
	while(index!=0)
	{
		temp1=temp1->next;
		index--;
	}
	
	head=temp1->next;
	temp1->next=NULL;
	temp3->next=temp2;
	
}

void print_LL(node *head)
{
	while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
	int n;
	cin>>n;
	
	node *head;
	Link_list(head,n);
	
	print_LL(head);
	
	return 0;
}
