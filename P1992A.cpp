#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c)
{
  int pp=a*b*c;
  int p=0;
  for(int i=0;i<6;i++)
  {
    for(int j=0;j<6;j++)
    {
        for(int k=0;k<6;k++)
        {
            if(i+j+k<=5) 
            {
            p=(a+i)*(b+j)*(c+k);
            pp=max(pp,p);
            }
        }
    }
  }
  cout<<pp<<endl;
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