#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc;
	cin >> tc;
	while (tc--)
	{
		int m;
		string str;
		cin >> m >> str;

		vector<int> arr(m + 4, 0);
		for (int i = m; i >= 1; i--)
			arr[i] = arr[i + 1] + (str[i - 1] == '(');

		bool f = false;
		for (int i = 1; i < m && !f; i++)
		{
			if (str[i - 1] == ')' && str[i] == '(' && arr[i + 2] > 0)
				f = true;
		}

		cout << (f ? m - 2 : -1) << '\n';
	}
	return 0;
}