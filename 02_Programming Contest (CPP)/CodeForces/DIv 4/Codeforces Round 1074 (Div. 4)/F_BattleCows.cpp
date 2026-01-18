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

struct Node
{
	int xr;
	int win; // 0 = left wins, 1 = right wins
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		int N = 1 << n;

		vector<int> a(N);
		for (int i = 0; i < N; i++)
			cin >> a[i];

		vector<Node> st(2 * N);

		auto pull = [&](int i)
		{
			Node L = st[i << 1], R = st[i << 1 | 1];
			st[i].xr = L.xr ^ R.xr;
			if (L.xr >= R.xr)
				st[i].win = 0;
			else
				st[i].win = 1;
		};

		for (int i = 0; i < N; i++)
			st[N + i] = {a[i], 0};
		for (int i = N - 1; i >= 1; i--)
			pull(i);

		auto upd = [&](int p, int v)
		{
			int i = N + p;
			st[i] = {v, 0};
			for (i >>= 1; i >= 1; i >>= 1)
				pull(i);
		};

		auto pos_final = [&](int p)
		{
			ll pos = 0;
			ll sz = 1;
			int i = N + p;
			while (i > 1)
			{
				int side = i & 1;
				int par = i >> 1;
				if (st[par].win == side)
					pos += sz;
				i = par;
				sz <<= 1;
			}
			return pos;
		};

		while (q--)
		{
			int b, c;
			cin >> b >> c;
			--b;

			int old = a[b];
			upd(b, c);

			ll p = pos_final(b);
			cout << (N - 1 - p) << "\n";

			upd(b, old);
		}
	}
	return 0;
}
