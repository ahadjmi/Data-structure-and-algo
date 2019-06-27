#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int x)
{
    if(s.empty() || s.top() < x)
    {
        s.push(x);
        
        return;
    }
    
    int y = s.top();
    s.pop();
    
    insert(s,x);
    
    s.push(y);
}
void sort(stack<int> &s)
{
   //Your code here
   if(!s.empty())
   {
       int x = s.top();
       s.pop();
       
       sort(s);
       
       insert(s,x);
   }
}

int main() {

    stack<int> s;
    int n;
    cin>>n;
    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        s.push(val);
    }

    sort(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}

