#include<bits/stdc++.h>
using namespace std;




void solve(long long n, vector<long long >x)
{
 vector<long long>ans;
 ans.push_back(x[n-2]);
 ans.push_back(1e9);
 for(int i=n-3;i>=0;i--)
 {
    ans.push_back(ans.back()-x[i]);
}
reverse(ans.begin(), ans.end());
for(auto it:ans)
cout<<it<<" ";
cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        vector<long long >x(n-1);
        for(int j=0;j<n-1;j++)
        cin>>x[j];
        solve(n,x);
    }
}