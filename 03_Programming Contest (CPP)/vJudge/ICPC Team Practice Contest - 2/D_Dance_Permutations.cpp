#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e18; // no modulo needed for n<=18, adjust if needed

long long factorial(long long n) {
    long long res = 1;
    for(long long i = 1; i <= n; i++) res *= i;
    return res;
}

long long power(long long a, long long b) {
    long long res = 1;
    for(long long i = 0; i < b; i++) res *= a;
    return res;
}

int main() {
    long long n;
    cin >> n;
    long long ans = factorial(n-1) * power(2, n-1);
    cout << ans << "\n";
}
