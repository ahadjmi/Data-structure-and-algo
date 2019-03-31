#include<iostream>
#include<string.h>

using namespace std;
class student
{
	string name;
	string fname;
	string roll;
	string semester;


	public :

		int i,j;

		void input()
		{
			cout<<"Enter student name: ";

			cin>>name;

			cout<<"Enter Fathers name: ";

			cin>>fname;

			cout<<"Enter Roll number: ";
			cin>>roll;
			cout<<"Enter semester: ";
			cin>>semester;
		}

		void show()
		{

			cout<<name<<"\t\t"<<fname<<"\t\t"<<roll<<"\t\t"<<semester<<endl;

		}

		~student()
		{
			cout<<"object distroyed: "<<j+1<<endl;
			j++;
		}

};

int main()
{
	int n;

	cout<<"Enter number of student"<<endl;
	cin>>n;
	student s[n];

	for(int i=0;i<n;i++)
	{
		s[i].input();
	}

	cout<<"Name:\t   Father name\t    Roll no\t    semester\n";
	for(int i=0;i<n;i++)
	{
		s[i].show();
	}
}


