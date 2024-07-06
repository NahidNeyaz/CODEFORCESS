#include<bits/stdc++.h>
using namespace std;





void solve(int n, int a[])
{
    set<int>s;
    for(int i=0;i<n;i++)
    s.insert(a[i]);
    if(s.size()!=n)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        solve(n,a);
    }
    return 0;
}
