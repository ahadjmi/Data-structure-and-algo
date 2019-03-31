#include<iostream>
#include<string>
using namespace std;
int count=0;
void mazepath(int r,int c,int cr,int cc,string ans)
{
    if(cc==c && cr==r)
    {
        cout<<ans<<" ";
        
        return;
    }
   if(cc>c||cr>r)
   {
   	 return;
   }
  
       
             mazepath(r,c,cr,cc+1,ans+'H');   
      
        
            mazepath(r,c,cr+1,cc,ans+'V');
        
   
        mazepath(r,c,cr+1,cc+1,ans+'D');
}
void mazepathc(int r,int c,int cr,int cc,string ans)
{
    if(cc==c && cr==r)
    {
       count++;
        return;
    }
   if(cc>c||cr>r)
   {
   	 return;
   }
  
       
             mazepathc(r,c,cr,cc+1,ans+'H');   
      
        
            mazepathc(r,c,cr+1,cc,ans+'V');
        
   
        mazepathc(r,c,cr+1,cc+1,ans+'D');
}
int main() {
    
    int row,col;
    string ans="";
    cin>>row;
    cin>>col;
     mazepathc(row-1,col-1,0,0,ans);
     cout<<count<<endl;
    mazepath(row-1,col-1,0,0,ans);
	return 0;
}
