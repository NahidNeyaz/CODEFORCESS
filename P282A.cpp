#include <bits/stdc++.h>
using namespace std;


void solve(int n, vector<string> s)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == "++X")
            ++x;
        else if (s[i] == "X++")
            x++;
        else if (s[i] == "--X")
            --x;
        else if (s[i] == "X--")
            x--;
    }
    cout << x << endl;
}

int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    solve(n, s);
}