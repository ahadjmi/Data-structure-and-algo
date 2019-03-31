#include<iostream>

using namespace std;
struct time
{
	int seconde;
	int minutes;
	int hours;
	
};

time inputTime(time t)
{
		cin>>t.hours;
		cin>>t.minutes;
		cin>>t.seconde;
		
		return t;
}

time diff(time t1,time t2)
{
	time d;
	d.seconde=t1.seconde-t2.seconde;
	d.minutes=t1.minutes-t2.minutes;
	d.hours=t1.hours-t2.hours;
	
	return d;
}

void printTime(time t)
{
	cout<<t.hours<<":"<<t.minutes<<":"<<t.seconde<<endl;
}

int main()
{
	time T1,T2,dr;
	
	inputTime(T1);
	inputTime(T2);
	
	dr=diff(T1,T2);
	
	printTime(dr);
	
	
}
