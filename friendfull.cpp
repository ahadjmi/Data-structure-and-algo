#include<iostream>
#include<string.h>

using namespace std;

class lname;

class fname
{
	string name1;
		
	public:
		void input()
		{
			cout<<"Enter First name: "<<endl;
			cin>>name1;
		}
		
		friend void full(fname,lname);
};

class lname
{
	string name2;
		
	public:
		void input()
		{
			cout<<"Enter last name: "<<endl;
			cin>>name2;
		}
		friend void full(fname,lname);
};

void full(fname f,lname l)
{
	cout<<"Your full name is :"<<f.name1<<" "<<l.name2<<endl;
}

int main()
{
	fname g;
	lname h;
	g.input();
	h.input();
	full(g,h);
	
	return 0;
}
