#include<bits/stdc++.h>
using namespace std;



void solve1(char c)
{
    string s="codeforces";
    int flag=0;
    for(int i=0;i<10;i++)
    {
        if(c==s[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"NO"<<endl;
    else if(flag==1)
    cout<<"YES"<<endl;


}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char c;
        cin>>c;
        solve1(c);
    }
}