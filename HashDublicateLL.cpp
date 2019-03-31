#include<iostream>
#include<set>

using namespace std;



struct node
{
	int data;
	node* next;
	
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





void printLL(node *head)
{
	node* temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}

int main()
{
	
	
	int q;
	cin>>q;
	
	while(q>0)
	{
		node* head=NULL;
		set< int > m;
		int n,val;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>val;
			//unordered_set<int>::iterator it=m.find(val);
			if(m.count(val)==0)
			{
				appendLL(head,val);
				m.insert(val);
			}	
			printLL(head);
		}
		
	

		q--;
	}

	
	return 0;
}
