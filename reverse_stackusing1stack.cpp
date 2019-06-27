#include <iostream>
#include<stack>
using namespace std;


void reverse_stack(stack<int> &input,int n)
{
    stack<int> output;
    for(int i=0;i<n;i++)
    {
        int temp = input.top();
        input.pop();
    
        for(int j = n-i-1;j>0;j--)
        {
        	
            int k = input.top();
            input.pop();
            output.push(k);
        }
        input.push(temp);
       
        while(!output.empty())
        {
            int k=output.top();
            output.pop();
            input.push(k);
        }
    }
}
int main() {
    stack<int> input;

    int n;
    cin>>n;
    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        input.push(val);
    }
    
    reverse_stack(input,n);
   
    while(!input.empty())
    {
        cout<<input.top()<<" ";
        input.pop();
    }

    return 0;
}

