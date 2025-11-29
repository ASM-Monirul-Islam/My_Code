#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> M(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }

        vector<int> row_xor(n, 0), col_xor(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                row_xor[i] ^= M[i][j];
                col_xor[j] ^= M[i][j];
            }
        }

        long long old_total = 0;
        for (int x : row_xor) old_total += x;
        for (int x : col_xor) old_total += x;

        int max_and = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                max_and = max(max_and, row_xor[i] & col_xor[j]);
            }
        }

        long long ans = old_total - 2 * max_and;
        cout << ans << "\n";
    }

    return 0;
}
