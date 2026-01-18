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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> arr(n);
        ll totLen = 0;
        int mxL = 0;

        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            arr[i].resize(l);
            for (int j = 0; j < l; j++)
                cin >> arr[i][j];
            totLen += l;
            mxL = max(mxL, l);
        }

        vector<ll> G(mxL + 2, 0);
        for (int i = 0; i < n; i++)
        {
            for (int x : arr[i])
            {
                if (x <= mxL + 1)
                    G[x]++;
            }
        }

        vector<int> mex(n), delta(n);
        ll S = 0;
        ll B = 0;

        for (int i = 0; i < n; i++)
        {
            int L = (int)arr[i].size();
            vector<char> pres(L + 2, 0);
            vector<int> cnt(L + 1, 0);

            for (int x : arr[i])
            {
                if (x <= L + 1)
                    pres[x] = 1;
                if (x <= L)
                    cnt[x]++;
            }

            int m = 0;
            while (m <= L && pres[m])
                m++;

            int nxt = m + 1;
            while (nxt <= L + 1 && pres[nxt])
                nxt++;

            mex[i] = m;
            delta[i] = nxt - m;
            S += m;

            ll out = 0;
            for (int x = 0; x < m; x++)
            {
                if (cnt[x] == 1)
                    out += (long long)x - m;
            }
            B += out;
        }

        long long C = 0;
        for (int i = 0; i < n; i++)
        {
            C += (long long)delta[i] * G[mex[i]];
        }

        long long totalOps = totLen * (n - 1LL);
        long long ans = S * totalOps + (n - 1LL) * B + C;

        cout << ans << "\n";
    }
    return 0;
}
