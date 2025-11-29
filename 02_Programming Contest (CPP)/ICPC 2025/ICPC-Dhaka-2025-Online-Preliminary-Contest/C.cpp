#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

struct Solver {
    int n;
    vector<vector<int>> g;
    vector<long long> sub;
    vector<vector<long long>> dp;

    void compute_sub(int v, int p) {
        sub[v] = 1LL << (v - 1);
        for (int u : g[v]) if (u != p) {
            compute_sub(u, v);
            sub[v] |= sub[u];
        }
    }

    void solve(int v, int p) {
        vector<int> children;
        bool is_leaf = true;
        for (int u : g[v]) if (u != p) {
            solve(u, v);
            children.push_back(u);
            is_leaf = false;
        }
        if (is_leaf) {
            for (int mask = 0; mask < (1 << n); ++mask) {
                dp[v][mask] = __builtin_popcount(mask);
                if (dp[v][mask] >= MOD) dp[v][mask] -= MOD;
            }
        } else {
            for (int mask = 0; mask < (1 << n); ++mask) {
                long long &ans = dp[v][mask];
                ans = 0;
                for (int id = 0; id < n; ++id) {
                    if ((mask & (1LL << id)) == 0) continue;
                    int val = id + 1;
                    long long rmask = mask & ~sub[val];
                    long long prod = 1;
                    for (int c : children) {
                        prod = prod * dp[c][rmask] % MOD;
                    }
                    ans = (ans + prod) % MOD;
                }
            }
        }
    }

    long long run() {
        sub.assign(n + 1, 0LL);
        dp.assign(n + 1, vector<long long>(1 << n, 0LL));
        compute_sub(1, -1);
        solve(1, -1);
        return dp[1][(1 << n) - 1];
    }

    Solver(int _n, const vector<pair<int, int>>& edges) : n(_n) {
        g.assign(n + 1, {});
        for (auto w : edges) { 
            g[w.first].push_back(w.second);
            g[w.second].push_back(w.first);
        }
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int n; cin >> n;
        vector<pair<int, int>> edges;
        for (int i = 0; i < n - 1; ++i) {
            int u, v; cin >> u >> v;
            edges.emplace_back(u, v);
        }
        Solver solver(n, edges);
        cout << solver.run() << '\n';
    }
    return 0;
}