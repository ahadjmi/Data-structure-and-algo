#include<iostream>

using namespace std;

class time
{
	int hours,min;
	
	public :
		
		void settime(int h , int m)
		{
			hours=h;
			min=m;
		}
		
		void showtime()
		{
			cout<<hours<<":"<<min<<endl;
		}
		
		void sumtime(time T1,time T2)
		{
			hours=T1.hours+T2.hours;
			min=T1.min+T2.min;
		}
};

int main()
{
	time T1,T2,T3;
	T1.settime(15,45);
	T2.settime(02,23);
	T3.sumtime(T1,T2);
	T3.showtime();
	
	return 0;
}
