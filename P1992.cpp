#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>v1)
{
    int s=INT16_MIN,ss=0;
    int l=0;
    for(int i=0;i<3;i++)
    {
        l=max(v1[i],l);
        ss=s;
        s=min(v1[i],s);
    }
    

    
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int>v1(3);
        for(int i=0;i<3;i++)
        cin>>v1[i];
        solve(v1);
    }
}