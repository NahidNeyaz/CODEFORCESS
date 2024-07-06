#include<bits/stdc++.h>
using namespace std;





void solve(int n, vector<int>a)
{
    int  hello=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        hello=min(max(a[i],a[i+1]),hello);
    }
    int ans=hello-1;
    cout<<ans<<endl;
}
    
    int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int j=0;j<n;j++)
        cin>>a[j];
        solve(n,a);

    }
}