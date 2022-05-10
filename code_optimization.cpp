#include <iostream>
#include<vector>
using namespace std;
vector<string> deadcode(vector<string> g)
{
    vector<string> res;
    int n=g.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int flag=0;
            for(auto it:g[j])
            {
                if(it==g[i][0])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
             res.push_back(g[i]);
        }
    }
    res.push_back(g[n-1]);
    return res;
}
int main()
{
    vector<string> g;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string g1;
        cin>>g1;
        g.push_back(g1);
    }
    vector<string> ans=deadcode(g);
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
    return 0;
}
