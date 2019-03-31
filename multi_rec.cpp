#include<iostream>

using namespace std;

int multiply_num(int n,int m)
{
	if(m==0)
	{
		return 0;
	}
	
	
	int mul=multiply_num(n,m-1)+n;
	
	return mul;

}

int main()
{
	int num1,num2;
	
	cin>>num1>>num2;
	
	cout<<multiply_num(num1,num2);
	
}
