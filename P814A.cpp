#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, vector<int> v, vector<int> v1)
{
    int j = k - 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = v1[j];
            j--;
        }
         //cout<<v[i]<<endl;
    }
    vector<int> v2 = v;
    int flag = 0;
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++)
    {
        if (v2[i] != v[i])
            flag = 1;
         //cout<<v2[i]<<endl;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
        return;
    }
    else if (flag == 0 && k == 1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> v1(k);
    for (int i = 0; i < k; i++)
        cin >> v1[i];
    solve(n, k, v, v1);
    return 0;
}