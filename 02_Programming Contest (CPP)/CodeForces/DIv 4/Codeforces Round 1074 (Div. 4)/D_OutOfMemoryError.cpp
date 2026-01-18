#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define SUM(x) accumulate(x.begin(), x.end(), 0);
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        ll h;
        cin >> n >> m >> h;

        vector<ll> a0(n + 1);
        for (int i = 1; i <= n; i++) {
			cin >> a0[i];
		}

        vector<ll> add(n + 1, 0);
        vector<int> stamp(n + 1, -1);
        int rid = 0;

        for (int k = 0; k < m; k++) {
            int b;
            ll c;
            cin >> b >> c;

            if (stamp[b] != rid) {
                stamp[b] = rid;
                add[b] = 0;
            }
            add[b] += c;

            if (a0[b] + add[b] > h) {
                rid++; 
            }
        }

        for (int i = 1; i <= n; i++) {
            ll cur = a0[i] + ((stamp[i] == rid) ? add[i] : 0LL);
            cout << cur << (i == n ? '\n' : ' ');
        }
    }
    return 0;
}
