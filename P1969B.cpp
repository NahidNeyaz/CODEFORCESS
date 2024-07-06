#include <bits/stdc++.h>
using namespace std;

long long  solve(string s)
{
    int l = s.length(); // length
    int one = 0;
    long long sum = 0;
    for (long long  i = 0; i < l; i++)
    {
        if (s[i] == '1')
            one++;
        else
        {
            if (one > 0)
                sum += (one + 1);
        }
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    // int ans;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        long long ans = solve(s);
        cout << ans << endl;
    }
    return 0;
}