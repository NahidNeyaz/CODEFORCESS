#include <bits/stdc++.h>
using namespace std;

string solve(int n, int f, int k, vector<int> d)
{
    int ff = d[f]; // favorite number
    sort(d.begin(), d.end(), greater<int>());
    string s;
    int p;
    for (int i = 0; i < n; i++)
    {
        if (ff == d[i])
        {
            p = i;
            break;
        }
    }
    if (n == k)
        s = "YES";
    else if (d[k] == d[k - 1] && d[k] == ff)
        s = "MAYBE";
    else if (ff > d[k])
        s = "YES";
    else
        cout << "NO";

    return s;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, f, k;
        cin >> n >> f >> k;
        f = f - 1;
        vector<int> d(n);
        for (int j = 0; j < n; j++)
            cin >> d[j];
        string s = solve(n, f, k, d);
        cout << s << endl;
    }
    return 0;
}
// MAYBE
//  YES
//  NO
//  YES
//  YES
//  YES
//  MAYBE
//  MAYBE
//  YES
//  YES
//  YES
//  NO