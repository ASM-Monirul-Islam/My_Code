#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	int count = 0;
	cin >> n;
	if (n == 7 or n == 4)
	{
		cout << "NO" << endl;
		return 0;
	}
	while (n != 0)
	{
		if (n % 10 == 4 or n % 10 == 7)
		{
			count++;
		}
		n /= 10;
	}
	if (count == 7 or count == 4)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}