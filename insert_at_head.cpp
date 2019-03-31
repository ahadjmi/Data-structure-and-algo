#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void insert_at_odd(node *&head_odd,int *a,int n)
{
    
    
    node* it;
    int data,flag=1;
    for(int i=0;i<n;i++)
    {
    	if(a[i]%2!=0)
    	{
    		node* temp = new node();
    		data=a[i];
    		if(flag==1)
    		{
    			
    		    temp->data=data;
    		    temp->next=NULL;
    		    head_odd=temp;
    		    it=head_odd;
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
		
		else
		{
			
		}
	}
    
    
}

void insert_at_even(node *&head_even,int *a,int n)
{
    
    
    node* it;
    int data,flag=1;
    for(int i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    	{
    		node* temp = new node();
    		data=a[i];
    		if(flag==1)
    		{
    			
    		    temp->data=data;
    		    temp->next=NULL;
    		    head_even=temp;
    		    it=head_even;
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
	}
    
    
}

void print_data(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main() {
	
	int n,a[100];
	cin>>n;
	
	node* head_odd;
	node* head_even;
	node* temp;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	insert_at_odd(head_odd,a,n);
	insert_at_even(head_even,a,n);
	
	temp=head_odd;
	
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	temp->next=head_even;
    
    
    print_data(head_odd);
    
	return 0;
}
