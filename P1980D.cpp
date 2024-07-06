#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
}
void solve(int n, vector<int> v1)
{
    
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        for (int j = 0; j < n; j++)
            cin >> v1[j];
        solve(n, v1);
    }
}