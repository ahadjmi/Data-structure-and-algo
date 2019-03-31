#include<iostream>
#include<string>

using namespace std;

int main()
{
	int * p = new int;
	int n=1;
	
	while(n!=0)
	{
		cin>>*p;
		cout<<"do you want to update again";
		cin>>n;
		
	}
	cout<<*p;
	delete p;
	return 0;
}
