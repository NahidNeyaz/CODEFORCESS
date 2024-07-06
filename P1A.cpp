#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m, int a)
{
int c=0;
while(n>=0 && m>=0)
{
    c+=2;
    n-=a;
    m-=a;
}
cout<<c<<endl;
}
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    solve(n,m,a);
    return 0;
}