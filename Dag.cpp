#include <iostream>
#include<vector>
using namespace std;
void makedag(vector<string> g)
{
    int n=g.size();
    cout<<"DAG REPRESENTATION"<<endl;
    cout<<"PTR"<<" "<<"LPTR"<<" "<<"RPTR"<<" "<<"LABEL"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<g[i][3]<<" "<<g[i][2]<<" "<<g[i][4]<<" "<<g[i][0]<<endl;
    }
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
    makedag(g);
}
