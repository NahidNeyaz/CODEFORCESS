#include<bits/stdc++.h>
using namespace std;



void solve(int n, int c, int d, vector<long long>a)
{
    vector<long long>ans;
    sort(a.begin(),a.end());
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            int gg=a[0]+i*c+j*d;
            ans.push_back(gg);
        }
    }
    sort(ans.begin(),ans.end());
    if(a == ans)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c,d;
        cin>>n>>c>>d;
        vector<long long>a(n*n);
        for(long long j=0;j<(n*n);j++)
        cin>>a[j];
        solve(n,c,d,a);

    }
}

