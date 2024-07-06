#include<bits/stdc++.h>
using namespace std;


void solve(int n, int q,int h[],int qq[])
{
    long long sum=0;
    for(int i=0;i<q;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            if(qq[i]>=h[j])
            sum+=h[j];
            else
            break;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,q;
        cin>>n>>q;
        int h[n];
        for(int j=0;j<n;j++)
        cin>>h[j];
        int qq[q];
        for(int j=0;j<q;j++)
        cin>>qq[j];
        solve(n,q,h,qq);
    }
    return 0;
}