#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
string ans="codeforces";
int count=0;
for(int j=0;j<10;j++)
{
    if(ans[j]==s[j])
    count++;
}
cout<<10-count<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        solve(s);
    }
}