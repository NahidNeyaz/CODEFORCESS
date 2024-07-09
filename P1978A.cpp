#include<bits/stdc++.h>
using namespace std;



void solve(int n, vector<int>v1)
{
  int m=0;
  for(int k=0;k<n-1;k++)
  m=max(m,v1[k]);
  int ans= m+v1[n-1];
  cout<<ans<<endl;
}
int main()
{
    int t;
    int n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
         vector<int>v1(n);
         for(int j=0;j<n;j++)
         cin>>v1[j];
         solve(n,v1);
    }

}