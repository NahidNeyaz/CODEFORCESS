#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int k)
{
    if (n == 1 && m == 1)
        cout << "NO"<<endl;
    else
    {
        int mp = n / m;
        if (n % m != 0)
            mp++;
        int rp = n - mp;
        if (k >= rp)
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        solve(n, m, k);
    }
}