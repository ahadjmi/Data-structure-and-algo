#include<iostream>

using namespace std;

int main()
{
	int n,i=0,max=-989732,min=945754,sum=0,num;
	float men;
	cin>>n;
	
	while(i<n)
	{
	
		cin>>num;
		
		if(min>num && max<num)
		{
			max=num;
			min=num;
		}
		else if(max<num)
		{
			max=num;
		}
		else if(min>num)
		{
			min=num;
		}
		sum=sum+num;
		i++;
	}
	
	men=sum*1.0/n;
	
	cout<<max<<" "<<min<<" "<<men;
	
	
    return 0;
}
