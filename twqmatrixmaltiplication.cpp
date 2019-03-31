#include<iostream>

using namespace std;

void maltipliTwoMatrix(int arr1[100][100],int arr2[100][100],int n)
{
	int arr3[100];
	
	for(int i=0;i<n;i++)
	{
		
	
		arr3[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			
			arr3[i]+=arr1[i][j]*arr2[j][i];
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		
	
		cout<<arr3[i]<<" ";
		
		cout<<endl;
	}
	
}
int main()
{
	int arr1[100][100],arr2[100][100],n;
	cout<<"Enter size of square matrix:";
	cin>>n;
	
	cout<<"Enter first matrix: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	cout<<"Enter second matrix: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	maltipliTwoMatrix(arr1,arr2,n);
	
	return 0;
}
