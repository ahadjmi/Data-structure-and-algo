#include<iostream>
#include<vector>
using namespace std;
template<class T>

class stack
{
	private :
	vector<T> v;
	
	public :
		
		bool isEmpty()
		{
		   return v.size()==0;
		}
		
		void push(int data)
		{
			v.push_back(data);
		}
		
		void pop()
		{
			if(isEmpty())
			{
				return;
			}
			v.pop_back();
		}
		
		int Size()
		{
			return v.size();
		}
		
		T top()
		{
			if(isEmpty())
			{
				return NULL;
			}
			return v[v.size()-1];
		}
};


int main()
{
	stack<int> s;
	s.push(74);
	s.push(34);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.push(45);
	cout<<s.top()<<endl;
}
