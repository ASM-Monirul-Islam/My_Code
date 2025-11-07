#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Monster {
    ll b, c;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, m;
        cin >> n >> m;
        multiset<ll> swords;
        for (int i = 0; i < n; ++i) {
            ll a; cin >> a;
            swords.insert(a);
        }
        vector<Monster> mons(m);
        for (int i = 0; i < m; ++i) cin >> mons[i].b;
        for (int i = 0; i < m; ++i) cin >> mons[i].c;

        // sort by b ascending, and c descending for equal b
        sort(mons.begin(), mons.end(), [](const Monster &A, const Monster &B) {
            if (A.b != B.b) return A.b < B.b;
            return A.c > B.c;
        });

        int kills = 0;
        for (auto &mon : mons) {
            auto it = swords.lower_bound(mon.b);
            if (it == swords.end()) continue; // no sword can kill this monster
            ll x = *it;
            swords.erase(it);
            if (mon.c > 0) swords.insert(max(x, mon.c));
            ++kills;
        }
        cout << kills << '\n';
    }
    return 0;
}
