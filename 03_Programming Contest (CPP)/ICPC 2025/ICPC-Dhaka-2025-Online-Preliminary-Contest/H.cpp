#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> initial(n);
    unordered_set<int> have;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        cin >> initial[i];
        if (!have.count(initial[i])) {
            have.insert(initial[i]);
            q.push(initial[i]);
        }
    }

    unordered_map<int, vector<pair<int,int>>> adj;

    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        adj[x].push_back({y, z});
        adj[y].push_back({x, z});
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (auto &p: adj[x]) {
            int y = p.first;
            int z = p.second;

            if (have.count(y) && !have.count(z)) {
                have.insert(z);
                q.push(z);
            }
        }
    }

    cout << have.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
}
