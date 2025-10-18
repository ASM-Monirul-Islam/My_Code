#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, r, x;
	cin >> n;
	while (n--)
	{
		cin >> r;
		if (r <= 1399)
		{
			x = 4;
		}
		else if (r >= 1400 and r <= 1599)
		{
			x = 3;
		}
		else if (r >= 1600 and r <= 1899)
		{
			x = 2;
		}
		else if (r >= 1900)
		{
			x = 1;
		}
		cout << "Division " << x << endl;
	}
	return 0;
}