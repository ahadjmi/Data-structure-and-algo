#include<iostream>

using namespace std;

template<typename T>
struct node
{
	T data;
	node* next;
	
};
template<typename T>

struct stackLL
{
	private:
		node<T>* head=NULL;
		int size=0;
		
	public:
		
		
	int Size()
	{
			
		return size;
	}
	
	bool isEmpty()
	{
		if(head==NULL)
		{
			return 1;
		}
		
		else
		{
			return 0;
		}
	}
	
	void push(T val)
	{
		if(head==NULL)
		{
			head=new node<T>();
			head->data=val;
			head->next=NULL;
			size++;
		}
		
		else
		{
			node<T>* temp=new node<T>();
			temp->data=val;
			temp->next=head;
			head=temp;
			size++;
		}
		
	}
	
	void pop()
	{
		if(!isEmpty())
		{
		    node<T> *temp=head;
			head=head->next;
			delete (temp);
		}
	}
	
	T top()
	{
		return head->data;
	}
};

int main()
{
	stackLL<char> s;
	char val;
	char temp;
	while(val!='$')
	{
		
		cin>>val;
		if(val=='(' || val=='{' || val=='[')
		{
			s.push(val);
		}
		
		else if((s.top=='(' && val==')') || (s.top=='{' && val=='}') || (s.top=='[' && val==']')
		{
			s.pop();
		}
			
		
	}
	

	if(s.Size()==0)
	{
		cout<<"balanced"<<endl;
	}
	
	else
	{
		cout<<"Unbalaced";
	}
	
	return 0;
	
	
	
	
}
