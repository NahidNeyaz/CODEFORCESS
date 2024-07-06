#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, vector<char> p)
{
    map<char, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
        mp[p[i]]++;
    for (char i = 'A'; i <= 'G'; i++)
    {
        if (mp.find(i) != mp.end())
        {
            if (mp[i] < m)
                count += m - mp[i];
        }
        else if (mp.find(i) == mp.end())
            count += m;
    }
    return (count);
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, n;
        cin >> n >> m;
        vector<char> p(n);
        for (int j = 0; j < n; j++)
            cin >> p[j];
        int ans = solve(n, m, p);
        cout << ans << endl;
    }
    return 0;
}