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
		int n;
		cin >> n;
		int c0 = 0, c1 = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x == 0)
				c0++;
			if (x == 1)
				c1++;
		}

		if (c0 == 0)
			cout << "NO"<<endl;
		else if (c1 == 0)
			cout << (c0 == 1 ? "YES\n" : "NO\n");
		else
			cout << "YES"<<endl;
	}
	return 0;
}