#include <bits/stdc++.h>
using namespace std;

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
		string str;
		cin >> str;

		int z = 0;
		for (char c : str)
			z += (c == '0');

		vector<int> arr;
		for (int i = 0; i < z; i++)
			if (str[i] == '1')
				arr.push_back(i + 1);
		for (int i = z; i < n; i++)
			if (str[i] == '0')
				arr.push_back(i + 1);

		if (arr.empty())
		{
			cout << "Bob\n";
		}
		else
		{
			cout << "Alice\n";
			cout << (int)arr.size() << "\n";
			for (int i = 0; i < (int)arr.size(); i++)
			{
				cout << arr[i] << (i + 1 == (int)arr.size() ? '\n' : ' ');
			}
		}
	}
	return 0;
}