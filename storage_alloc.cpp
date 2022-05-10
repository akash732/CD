#include <iostream>
#include<vector>
#include<stack>
using namespace std;
stack<int> st;
void push1(int n)
{
    st.push(n);
}
void pop()
{
    st.pop();
    stack<int> g2=st;
    while(g2.empty()==false)
    {
        cout<<g2.top()<<" ";
        g2.pop();
    }
    cout<<endl;
}
void top()
{
    cout<<st.top();
}
int main()
{
    cout<<"Enter 1 to enter the element into stack"<<endl;
    cout<<"Enter 2 to pop element from  stack"<<endl;
    cout<<"Enter 3 to display top of the stack"<<endl;
    cout<<"Enter 4 to exit "<<endl;
    while(1)
    {
        int g;
        cin>>g;
        if(g==1)
        {
            int x;
            cin>>x;
            push1(x);
        }
        if(g==2)
        {
            pop();
        }
        if(g==3)
        {
            top();
        }
        if(g==4)
        {
            break;
        }
    }
}
