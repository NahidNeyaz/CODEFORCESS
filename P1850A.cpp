#include<bits/stdc++.h>
using namespace std;



void solve(int a, int b, int c)
{
    if(a+b>=10 ||a+c>=10||b+c>=10)
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
    int a,b,c;
    cin>>a>>b>>c;
    solve(a,b,c);
  }
}