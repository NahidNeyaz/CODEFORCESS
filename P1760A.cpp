#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c)
{
    int ans;
    if ((a > b && a < c) || (a > c && a < b))
    {
        ans = a;
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        ans = b;
    }
    else
    {
        ans = c;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
}