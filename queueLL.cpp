#include<iostream>
#include<stack>
using namespace std;

template<class T>

struct node
{
	T data;
	node* next;
};
template<class T>
class queue
{
	node<T>* head;
	node<T>* tail;
	
	int size;
	
	public :
		
		queue()
		{
			head=NULL;
			tail=NULL;
			size=0;
		}
		
		int Size()
		{
			return size;
		}
		
		void enqueue(T data)
		{
			
			if(head==NULL)
			{
				head=new node<T>();
				head->data=data;
				head->next=NULL;
				
				tail=head;
				size++;
			
			}
			
			else
			{
				node<T>* temp=new node<T>();
				temp->data=data;
				temp->next=NULL;
				tail->next=temp;
				tail=tail->next;
				size++;
				
			}
		}
		void dequeue()
		{
			node<T>* temp=head;
			head=head->next;
			size--;
			delete temp;
		}
		
		T top()
		{
			return head->data;
		}
};


int main()
{
	queue<int> q;
	q.enqueue(10);
	q.enqueue(30);
	q.enqueue(40);
	cout<<q.top()<<endl;
	q.dequeue();
	q.enqueue(50);
	cout<<q.top()<<endl;
	cout<<q.Size()<<endl;
	
	return 0;
	

}

