#include<iostream>
using namespace std;

int flag_even=1,flag_odd=1;

struct node
{
    int data;
    node* next;
};

void insert_at_odd(node *&head_odd,node *&head_even,int n)
{
    
    node* it_odd;
    node* it_even;
    int data;
    
    for(int i=0;i<n;i++)
    {
    	cin>>data;
    	if(data%2!=0)
    	{
    		node* temp = new node();
    		
    		if(flag_odd==1)
    		{
    			
    		    temp->data=data;
    		    temp->next=NULL;
    		    head_odd=temp;
    		    it_odd=head_odd;
    		    flag_odd--;
			}
			
			else
			{
				
				temp->data=data;
				temp->next=NULL;
				it_odd->next=temp;
				it_odd=it_odd->next;
			}
    		
		}
		
		else if(data%2==0)
    	{
    		node* temp = new node();
    		
    		if(flag_even==1)
    		{
    			
    		    temp->data=data;
    		    temp->next=NULL;
    		    head_even=temp;
    		    it_even=head_even;
    		    flag_even--;
			}
			
			else
			{
				
				temp->data=data;
				temp->next=NULL;
				it_even->next=temp;
				it_even=it_even->next;
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
	
	int n;
	cin>>n;
	
	node* head_odd;
	node* head_even;
	node* temp;
	
	
	
	insert_at_odd(head_odd,head_even,n);
	
	temp=head_odd;
	
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	temp->next=head_even;
    
    
    print_data(head_odd);
    
	return 0;
}
