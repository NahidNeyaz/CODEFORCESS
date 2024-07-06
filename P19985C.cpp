#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int>& a) {
    int c = 0;
    int maxx = INT_MIN;
    long long sum = 0;

    if (n == 1) {
        if (a[0] == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return;
    } else {
        for (int i = 0; i < n; i++) {
            sum += a[i]; 
            if (a[i] > maxx) {
                maxx = a[i]; 
            }
            long long ss = sum - maxx;
            if ( ss == maxx) {
                c++; 
            }
        }
        cout << c << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        solve(n, a);
    }
    return 0;
}
