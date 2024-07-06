#include<bits/stdc++.h>
using namespace std;





void solve(int n)
{
    int sum=0;
    int largest=INT_MIN;
    int pp=0;
    int check=n;
    while(check>=2)
    {
        sum=0;
        for(int j=1;j<=n;j++)
        {
            int p=check*j;
            if(p<=n)
            {
            sum+=p;
            if(largest<sum)
            {
                largest=sum;
                pp=check;
            }
            }
            else
            break;
        }
        check--;
    }
    cout<<pp<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        solve(n);
    }
}