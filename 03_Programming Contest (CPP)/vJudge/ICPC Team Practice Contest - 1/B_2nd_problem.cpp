#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;
        int ans = ((n - 1) % 4) ^ ((m - 1) % 3);
        if (ans != 0)
            cout << "Tuzik\n";
        else
            cout << "Vanya\n";
    }
    return 0;
}
