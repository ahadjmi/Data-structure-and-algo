#include<iostream>
#include<set>

using namespace std;

struct node
{
	int data;
	node *next;
};

void appendLL(node* &head,int val)
{


	
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


void printLL(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	
}
int main()
{
	set<int> s;
	node *head=NULL;
	int data;
	cin>>data;
	while(data!=-1)
	{
		if(s.count(data)==0)
		{
			s.insert(data);
			appendLL(head,data);
			
		}
		else
		{
			break;
		}
		
		cin>>data;
	}
	
	printLL(head);
	
	return 0;
}
