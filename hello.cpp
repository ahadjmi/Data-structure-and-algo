#include<iostream>
#include<string>

using namespace std;

void loop(int x,int y)
{
	int r;
	for(int i=x;i<=y;i++)
	{
		cout<<i<<",";
	}
}

int main()
{
	int a,b,z;
	
	cout<<"Enter i and n"<<endl;
	cin>>a>>b;
	
	loop(a,b);
	
	return 0;
}
