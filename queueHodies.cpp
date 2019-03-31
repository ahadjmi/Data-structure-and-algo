#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> check,q1,q2,q3,q4,q5,q6;
    bool flag1=1,flag2=1,flag3=1,flag4=1;
    int n,countE=0,countD=0;
    cin>>n;
    
    while(n>0 && countE>=countD)
    {
        char oper;
        int x,y;
        cin>>oper;
        if(oper=='E')
        {
            countE++;
            cin>>x;
            cin>>y;
            if(x==1)
            {
                if(flag1==1 || check.empty())
                {
                    check.push(x);
                    flag1=0;
                }
                
                q1.push(y);
            }
            else if(x==2)
            {
                if(flag2==1 || check.empty())
                {
                    check.push(x);
                    flag2=0;
                }
                
                 q2.push(y);
            }
            
            else if(x==3)
            {
                if(flag3==1 || check.empty())
                {
                    check.push(x);
                    flag3=0;
                }
                
                 q3.push(y);
            }
            
            else if(x==4)
            {
                if(flag4==1 || check.empty())
                {
                    check.push(x);
                    flag4=0;
                }
                
                 q4.push(y);
            }
            
            
        }
        
        else if(oper=='D')
        {
            int val;
            val=check.front();
            if(val==1)
            {
                   q5.push(val);
                    q6.push(q1.front());
                    q1.pop();
                  
                if(q1.empty())
                {
                     check.pop();
                }
               
            }
            
            else if(val==2)
            {
                 q5.push(val);
                    q6.push(q2.front());
                    q2.pop();
                  
                if(q2.empty())
                {
                   check.pop();
                }
                
            }
            
             else if(val==3)
            {
                q5.push(val);
                    q6.push(q3.front());
                    q3.pop();
                   
                if(q3.empty())
                {
                     check.pop();
                }
               
            }
            
             else if(val==4)
            {
                q5.push(val);
                q6.push(q4.front());
                    
                    q4.pop();
                    
                if(q4.empty())
                {
                    check.pop();
                }
               
            }
            
          
        }
        n--;
    }
    
    while(!q5.empty())
    {
    	cout<<q5.front()<<" ";
    	cout<<q6.front()<<endl;
    	q5.pop();
    	q6.pop();
	}
	return 0;
}
