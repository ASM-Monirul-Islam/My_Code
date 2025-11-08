#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define ll long long
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int ans = n;
        while (n >= 3)
        {
            ans += n / 3;
            n = n / 3 + n % 3;
        }
        if (n == 2)
        {
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}