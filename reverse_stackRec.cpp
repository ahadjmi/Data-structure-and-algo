#include <iostream>
#include<stack>
using namespace std;

void insert_bottom(stack<int>& s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int k=s.top();
    s.pop();

    insert_bottom(s,x);
    s.push(k);
}

void reverse_stack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int k = s.top();
    s.pop();
    reverse_stack(s);
    insert_bottom(s,k);
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

    reverse_stack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}

