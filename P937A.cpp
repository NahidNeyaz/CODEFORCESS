#include<bits/stdc++.h>
using namespace std;


void solve(int a, int b, int c)
{
    string ans="NONE";
    if(a<b && b<c)
    ans="STAIR";
    else if(a<b && b>c)
    ans="PEAK";
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
}