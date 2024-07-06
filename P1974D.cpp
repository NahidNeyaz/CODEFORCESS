#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s)
{
    string t(s);
    map<char, int> p;
    if (n == 1)
    {
        cout << "NO"<<endl;;
        return;
    }
    for (auto &it : s)
        p[it]++;
    if ((p['N'] + p['S'] )% 2 != 0)
    {
        cout << "NO"<<endl;
        return;
    }
    if ((p['W'] + p['E']) % 2 != 0)
    {
        cout << "NO"<<endl;
        return;
    }
    for (auto &ch : "NESW")
    {
        if (p[ch] <= 2)
        {
            cout << "NO"<<endl;
            return;
        }
    }
    map<char, int> z = {{'N', (p['N'] + 1) / 2}, {'S', (p['S'] + 1) / 2}, {'W', (p['W'] + 1) / 2}, {'E', (p['E'] + 1) / 2}};
    for (int i = 0; i < n; i++)
    {
        if (z[t[i]] != 0)
        {
            z[t[i]]--;
            cout << "R";
        }
        else
            cout << "H";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n, s);
    }
    return 0;
}