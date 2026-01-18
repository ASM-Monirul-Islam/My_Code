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
#define vout(x)                        \
    for (int i = 0; i < x.size(); i++) \
        cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

struct BIT
{
    int n;
    vector<int> t;
    BIT(int n = 0) : n(n), t(n + 1, 0) {}
    void add(int i, int v)
    {
        for (; i <= n; i += i & -i)
            t[i] += v;
    }
    int sum(int i)
    {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += t[i];
        return s;
    }
    int kth(int k)
    {
        int idx = 0, bit = 1;
        while ((bit << 1) <= n)
            bit <<= 1;
        for (; bit; bit >>= 1)
        {
            int ni = idx + bit;
            if (ni <= n && t[ni] < k)
            {
                k -= t[ni];
                idx = ni;
            }
        }
        return idx + 1;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n + 1), p(n + 1, 0), d(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            p[i] = p[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++)
            d[i] = a[i] - p[i - 1];

        vector<int> s0(n + 2, 0);
        for (int i = n; i >= 1; i--)
            s0[i] = s0[i + 1] + (d[i] > 0);

        vector<pair<ll, int>> dv;
        dv.reserve(n);
        for (int i = 1; i <= n; i++)
            dv.push_back({d[i], i});
        sort(dv.begin(), dv.end(), [](auto &x, auto &y)
             { return x.first > y.first; });

        vector<int> ord(n);
        iota(ord.begin(), ord.end(), 1);
        sort(ord.begin(), ord.end(), [&](int i, int j)
             { return a[i] > a[j]; });

        BIT bit(n);
        int ptr = 0;
        vector<ll> ans(n + 1, 0);

        auto fp = [&](int l, int r, int lim)
        {
            if (l > r || lim < 0)
                return r + 1;
            int lo = l, hi = r, res = r + 1;
            while (lo <= hi)
            {
                int mid = (lo + hi) / 2;
                if (s0[mid + 1] <= lim)
                {
                    res = mid;
                    hi = mid - 1;
                }
                else
                    lo = mid + 1;
            }
            return res;
        };

        for (int i : ord)
        {
            ll v = a[i];
            while (ptr < n && dv[ptr].first > v)
            {
                bit.add(dv[ptr].second, 1);
                ptr++;
            }

            ll A = s0[i + 1], K = k - A, L = 0;
            if (K >= 0)
            {
                int tot = bit.sum(i - 1);
                int t = lower_bound(p.begin(), p.end(), v) - p.begin() + 1;

                int R1 = min(i, t - 1);
                if (R1 >= 1)
                {
                    ll lim = K;
                    int pos = 1;
                    ll need = (ll)tot - lim;
                    if (need > 0)
                    {
                        if (need > tot)
                            pos = i + 1;
                        else
                            pos = bit.kth((int)need) + 1;
                    }
                    int x = max(1, pos);
                    if (x <= R1)
                        L += R1 - x + 1;
                }

                int L2 = max(1, t), R2 = i;
                if (L2 <= R2)
                {
                    ll lim = K - 1;
                    int pos = 1;
                    if (lim < 0)
                        pos = i + 1;
                    else
                    {
                        ll need = (ll)tot - lim;
                        if (need > 0)
                        {
                            if (need > tot)
                                pos = i + 1;
                            else
                                pos = bit.kth((int)need) + 1;
                        }
                    }
                    int x = max(L2, pos);
                    if (x <= R2)
                        L += R2 - x + 1;
                }
            }

            ll R = 0;
            int st = i + 1;
            if (st <= n)
            {
                int tr = lower_bound(p.begin() + 1, p.end(), 2 * v) - p.begin();
                int eA = min(n, tr - 1);
                int xA = fp(st, eA, (int)k);
                if (xA <= eA)
                    R += eA - xA + 1;

                int sB = max(st, tr);
                int xB = fp(sB, n, (int)(k - 1));
                if (xB <= n)
                    R += n - xB + 1;
            }

            ans[i] = L + R;
        }

        for (int i = 1; i <= n; i++)
            cout << ans[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}
