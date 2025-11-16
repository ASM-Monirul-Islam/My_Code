#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

vector<long long> dijkstra(int start, int n, vector<vector<pair<int, int>>>& adj) {
    vector<long long> dist(n + 1, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (d > dist[u]) continue;
        
        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            int w = adj[u][i].second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    for (int tc = 1; tc <= T; tc++) {
        int N, M;
        cin >> N >> M;
        
        vector<vector<pair<int, int>>> adj(N + 1);
        
        for (int i = 0; i < M; i++) {
            int u, v, t;
            cin >> u >> v >> t;
            adj[u].push_back({v, t});
            adj[v].push_back({u, t});
        }
        
        int Q;
        cin >> Q;
        
        cout << "Case " << tc << ":\n";
        
        while (Q--) {
            int s1, d1, s2, d2;
            cin >> s1 >> d1 >> s2 >> d2;
            
            vector<long long> dist1 = dijkstra(s1, N, adj);
            vector<long long> dist2 = dijkstra(s2, N, adj);
            
            long long ans = max(dist1[d1], dist2[d2]);
            
            cout << ans << "\n";
        }
    }
    
    return 0;
}