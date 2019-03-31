#include<iostream>
using namespace std;

bool ratMaze(char board[100][100],int maze[100][100],int row,int col,int i,int j)
{
	  	
   	if(i==row && j==col)
	{
		maze[row][col]=1;
	
		return true;
	}
	
	if(i>row || j>col)
	{
		return false;	
	
   	}
	
   	
   	if(board[i][j]=='X')
   	{
   		return false;
	}
	
	maze[i][j]=1;
	
	if(ratMaze(board,maze,row,col,i,j+1))
	{
		return true;
	}
	if(ratMaze(board,maze,row,col,i+1,j))
	{
		return true;
	}
	
	
	maze[i][j]=0;

	
	return false;
		
}

int main()
{
	char board[100][100];
	int row,col;
	int maze[100][100]={0};
	
	
	cin>>row;
	cin>>col;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>board[i][j];
		}
	}
	
	bool ans=ratMaze(board,maze,row-1,col-1,0,0);
	
	if(ans==false)
	{
		cout<<"-1";
	}
	
	else
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				cout<<maze[i][j]<<" ";
			}
			
			cout<<endl;
		}
		
	}
	
	return 0;
}
