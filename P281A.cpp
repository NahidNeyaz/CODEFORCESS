#include<bits/stdc++.h>
using namespace  std;

void solve(string s)
{
   if(islower(s[0]))
   {
   s[0]=toupper(s[0]);
   }
    cout<<s<<endl;
}
int main()
{
    string s;
    cin>>s;
    solve(s);
} 

