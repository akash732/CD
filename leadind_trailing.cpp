#include <iostream>
#include<string>
#include<vector>
using namespace std;
void findlead(vector<string> g)
{
    for(auto it:g)
    {
        int n=it.size();
        for(int i=3;i<n;i--)
        {
            if(islower(it[i]) || it[i]=='(' ||it[i]==')')
            {
                 cout<<"Lead of "<<it[0]<<" "<<"{"<<it[i]<<"}"<<endl;
                 break;
             }
        }
    }
}
void findtrail(vector<string> g)
{
    
    for(auto it:g)
    {
        int n=it.size();
        for(int i=n-1;i>n-3;i--)
        {
            if(islower(it[i]) || it[i]=='(' ||it[i]==')')
            {
                 cout<<"Trail of "<<it[0]<<" "<<"{"<<it[i]<<"}"<<endl;
                 break;
             }
        }
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
   findlead(g);
   findtrail(g);
   
    return 0;
}
