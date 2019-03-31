#include<iostream>

using namespace std;

class complex
{
	int a,b;
	
	public :
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		
		friend complex operator+(complex ,complex);
		
		
		void display()
		{
			cout<<a<<"+"<<b<<"i";
		}
	
};

complex operator+(complex d,complex c)
{
		complex temp;
		temp.a=d.a+c.a;
		temp.b=d.b+c.b;
			
		return(temp);
			
}

int main()
{
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(4,8);
	c3=c1+c2;
	c3.display();
	
	return 0;
	
}
