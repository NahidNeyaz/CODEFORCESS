#include <bits/stdc++.h>
using namespace std;

string solve(int n, vector<int> a, vector<int> b, int m, vector<int> d)
{
    multiset<int> dd(d.begin(),d.end());
    int last=d[m-1];
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (dd.find(b[i]) != dd.end())
                dd.erase(dd.find(b[i]));
            else
                return "NO";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == last){
            flag = 0;
            break;
        }
        else
            flag = 1;
    }
    if (flag == 1)
        return "NO";
    else
        return "YES";
}

int main()
{
    int t;
    cin >> t;
    string ans;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
            cin >> a[j];
        vector<int> b(n);
        for (int j = 0; j < n; j++)
            cin >> b[j];
        int m;
        cin >> m;
        vector<int> d(m);
        for (int j = 0; j < m; j++)
            cin >> d[j];
        ans = solve(n, a, b, m, d);
        cout<<ans<<endl;
    }
    return 0;
}