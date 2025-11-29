#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1), b(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];

        int Xa = 0, Xb = 0;
        int lastDiff = -1;
        for (int i = 1; i <= n; ++i) {
            Xa ^= a[i];
            Xb ^= b[i];
            if (a[i] != b[i]) lastDiff = i;
        }

        if (Xa == Xb) {
            cout << "Tie\n";
        } else {
            if (lastDiff == -1) {
                cout << "Tie\n";
            } else if (lastDiff % 2 == 1) {
                cout << "Ajisai\n";
            } else {
                cout << "Mai\n";
            }
        }
    }
    return 0;
}
