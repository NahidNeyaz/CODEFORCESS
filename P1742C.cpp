#include<bits/stdc++.h>
using namespace std;



void solve(string s[])
{
    int cb=0;
    int cr=0;
   for(int i=0;i<8;i++)
   {
    if(s[i]=="R")
    cr++;
    else if(s[i]=="B")
    cb++;
    else if(cb==7){
    cout<<"B"<<endl;
    cr=0;
    cb=0;
    break;
    }
    else if(cr==7){
    cout<<"R"<<endl;
        cr=0;
    cb=0;
    break;}
    }
   return;
}
int main()
{
    int t;
    cin>>t;
    string s[8];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<8;j++){
        cin>>s[j];
        }
    solve(s);
    }
    return 0;
}