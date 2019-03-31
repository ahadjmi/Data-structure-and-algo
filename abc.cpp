#include<iostream>
#include<string>
using namespace std;
class Abc
{
	int i;
	string str;
	public:
	void display()
	{
	   getline(cin,str);
		i=0;
		while(str[i]!='\0')
		cout<<str[i++];
	}
};
int main()
{
	Abc obj;
	obj.display();
	return 0;
}
