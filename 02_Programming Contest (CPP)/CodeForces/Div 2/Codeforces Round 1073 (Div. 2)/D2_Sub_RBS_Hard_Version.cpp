#include <bits/stdc++.h>
using namespace std;

static const long long M = 998244353;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc;
	cin >> tc;
	while (tc--)
	{
		int len;
		string str;
		cin >> len >> str;

		vector<array<long long, 4>> dp(len + 3), sum(len + 3), n_dp(len + 3), n_sum(len + 3);
		for (int i = 0; i <= len + 2; i++)
		{
			dp[i].fill(0);
			sum[i].fill(0);
		}

		dp[0][0] = 1;

		for (char ch : str)
		{
			for (int i = 0; i <= len + 2; i++)
			{
				n_dp[i] = dp[i];
				n_sum[i] = sum[i];
			}

			for (int bal = 0; bal <= len; bal++)
			{
				for (int st = 0; st < 4; st++)
				{
					long long ways = dp[bal][st];
					long long acc = sum[bal][st];
					if (!ways)
						continue;

					if (ch == '(')
					{
						int n_bal = bal + 1;
						int nst = st;
						if (st == 1)
							nst = 2;
						else if (st == 2 || st == 3)
							nst = 3;

						n_dp[n_bal][nst] = (n_dp[n_bal][nst] + ways) % M;
						n_sum[n_bal][nst] = (n_sum[n_bal][nst] + acc + ways) % M;
					}
					else
					{
						if (bal == 0)
							continue;
						int nbal = bal - 1;
						int n_st = (st == 0 ? 1 : st);

						n_dp[nbal][n_st] = (n_dp[nbal][n_st] + ways) % M;
						n_sum[nbal][n_st] = (n_sum[nbal][n_st] + acc + ways) % M;
					}
				}
			}
			dp.swap(n_dp);
			sum.swap(n_sum);
		}

		long long res = (sum[0][3] - 2LL * dp[0][3]) % M;
		if (res < 0)
			res += M;
		cout << res << '\n';
	}
	return 0;
}