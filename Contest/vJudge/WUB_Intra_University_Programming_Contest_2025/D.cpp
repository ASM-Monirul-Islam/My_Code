#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;
	if (((n % 4) == 0) or ((n % 7) == 0) or ((n % 44) == 0) or ((n % 47) == 0) or ((n % 74) == 0) or ((n % 444) == 0) or ((n % 447) == 0) or ((n % 474) == 0) or ((n % 477) == 0))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

	return 0;
}