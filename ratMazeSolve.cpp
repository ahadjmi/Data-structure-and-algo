#include<iostream>
using namespace std;

void solPrint(int sol[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<sol[i][j]<" ";
		}
		cout<<endl;
	}
}

bool validPath(char maze[100][100],int i,int j,int n,int m)
{
	if(j<m && j>=0 && i>=0 && i<n && maze[i][j]!='X')
	{
		return true;
	}
	
	return false;
}

bool solveMaze(char maze[100][100],int sol[100][100],int i,int j,int n,int m)
{
	if(n==i && m==j)
	{
		sol[i][j]==1;
		
	
		return true;
	}
	
	if(validPath(maze,i,j,n,m)==true)
	{
		sol[i][j]==1;
		
		if(solveMaze(maze,sol,i,j+1,n,m)==true)
	    {
		    return true;
	    }
	
	    if(solveMaze(maze,sol,i+1,j,n,m)==true)
	    {
	    	return true;
     	}
     	
     	sol[i][j]=0;
		
		
		
	}
	return false;
	
}

int main()
{
	char maze[100][100];
	int row,col;
	int sol[100][100]={0};
	
	
	cin>>row;
	cin>>col;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>maze[i][j];
		}
	}
	
	bool ans=solveMaze(maze,sol,0,0,row-1,col-1);
	
	if(ans==false)
	{
		cout<<"-1";
	}
	
	solPrint(sol,row-1,col-1);

	
	return 0;
}

