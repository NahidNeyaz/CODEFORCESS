#include<bits/stdc++.h>
using namespace std;





void solve(string a, string b)
{
 string ansa=a;
 string ansb=b;
 ansa[0]=b[0];
 ansb[0]=a[0];
 cout<<ansa<<" "<<ansb;
 cout<<endl;
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    string a;
     string b;
     cin>>a>>b;
     solve(a,b);
}
}