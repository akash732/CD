#include <iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int prec(char ch)
{
    if(ch=='^')
       return 3;
    if(ch=='*' || ch=='/')
       return 2;
    if(ch=='+' || ch=='-')
        return 1;
    return -1;
}
string infixtoprefix(string s)
{
    stack<char> st;
    string ans;
    int n=s.size();
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0'&& ch<='9'))
           ans=ans+ch;
        else if(ch=='(')
           st.push(ch);
        else if(ch==')')
        {
            while(st.top()!='(')
            {
                ans=ans+st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(st.empty()==false && prec(s[i])<=prec(st.top()))
            {
                ans=ans+st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (st.empty()==false) 
    {
		ans =ans+st.top();
		st.pop();
	}
    reverse(ans.begin(),ans.end());
	return ans;
}
string infixtopostfix(string s)
{
    stack<char> st;
    string ans;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0'&& ch<='9'))
           ans=ans+ch;
        else if(ch=='(')
           st.push(ch);
        else if(ch==')')
        {
            while(st.top()!='(')
            {
                ans=ans+st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(st.empty()==false && prec(s[i])<=prec(st.top()))
            {
                ans=ans+st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (st.empty()==false) 
    {
		ans =ans+st.top();
		st.pop();
	}

	return ans;
}
int main()
{
    string s;
	cin >> s;
	cout<<"Expression "<<s<<endl;
	cout <<"Postfix Notation "<<infixtopostfix(s)<<endl;
	cout<<"Prefix Notation "<<infixtoprefix(s)<<endl;
	return 0;
  }
