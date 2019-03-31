#include<iostream>
using namespace std;

int count=0;

bool issafe(int board[100][100],int n,int i,int j)
{
	for(int row=0;row<i;row++)
	{
		if(board[row][j]==1)
		{
			
			return false;   //check for col
		}
		
    }
		
	int x=i;
	int y=j;
	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
		{
			return false;  //check for left diagonal
		}
			
		x--;
		y--;
			
	}
	
	x=i;
	y=j;
		
	while(x>=0 && y<n)
	{
		if(board[x][y]==1)
		{
			return false; //check for right diagonal
		}
		x--;
		y++;
	}
	
	return true;
}

bool nqueen(int board[100][100],int n,int i)
{
	if(i==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(board[i][j]==1)
				{
					cout<<"{"<<i+1<<"-"<<j+1<<"} ";
				}
				
			}
			
	    }
		
		cout<<" ";
		return false;
	}
	
	for(int j=0;j<n;j++)
	{
		
		
		if(issafe(board,n,i,j))
		{
			board[i][j]=1;
			
			bool istrue=nqueen(board,n,i+1);
			
			if(istrue)
			{
				return true;
			}
			
			board[i][j]=0;
		}
	}
	
	return false;
}

bool nqueen1(int board[100][100],int n,int i)
{
	if(i==n)
	{
		count++;
		
		return false;
	}
	
	for(int j=0;j<n;j++)
	{
		
		
		if(issafe(board,n,i,j))
		{
			board[i][j]=1;
			
			bool istrue=nqueen1(board,n,i+1);
			
			if(istrue)
			{
				return true;
			}
			
			board[i][j]=0;
		}
	}
	
	return false;
}


int main()
{
	int n,board[100][100];
	
	board[100][100] = {0};
	
	cin>>n;
	
	nqueen1(board,n,0);
	cout<<count<<endl;
	nqueen(board,n,0);
	
	return 0;
}
