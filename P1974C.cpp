#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>v, int n)
{
    map<pair<long long, long long>,int>ab;
    map<pair<long long,long long>,long long>bc;
    map<pair<long long,long long>,long long>ac;
    map<vector<long long>,long long>ab3;
    map<vector<long long>,long long>ac3;
    map<vector<long long>,long long>bc3;
    long long ans=0;
    for(long long i=0;i<n-2;i++)
    {
        long long a=v[i];
        long long b=v[i+1];
        long long c=v[i+2];
        ab[{a,b}]++;
        bc[{b,c}]++;
        ac[{a,c}]++;
        ab3[{a,b,c}]++;
        bc3[{b,c,a}]++;
        ac3[{a,c,b}]++;
        ans=ans+ab[{a,b}]-ab3[{a,b,c}];
        ans=ans+bc[{b,c}]-bc3[{b,c,a}];
        ans=ans+ac[{a,c}]-ac3[{a,c,b}];
    }
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
        vector<int>v(n);
        for(int j=0;j<n;j++)
        cin>>v[j];
        solve(v,n);
    }
}