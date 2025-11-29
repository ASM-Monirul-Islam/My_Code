#include <bits/stdc++.h>
using namespace std;

using int64 = long long;
const int MAXN = 200000;          
const int64 MOD = 998244353;

int64 fact[MAXN+1], invfact[MAXN+1];

int64 modpow(int64 a, int64 e){
    int64 r = 1;
    while(e){
        if(e & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return r;
}

int64 nCr(int n, int r){
    if(r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n-r] % MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    fact[0] = 1;
    for(int i = 1; i <= MAXN; ++i) fact[i] = fact[i-1] * i % MOD;
    invfact[MAXN] = modpow(fact[MAXN], MOD-2);
    for(int i = MAXN; i >= 1; --i) invfact[i-1] = invfact[i] * i % MOD;

    int T;
    if(!(cin >> T)) return 0;
    int64 inv2 = modpow(2, MOD-2);

    while(T--){
        int n;
        string s;
        cin >> n >> s;
        int c0 = 0, c1 = 0;
        for(char ch : s){
            if(ch == '0') ++c0;
            else ++c1;
        }

        if(c0 == 0 || c1 == 0){
            cout << 0 << '\n';
            continue;
        }

        int64 ways = nCr(n, c1); // C(n, c1)


        int64 S_total = 0;
        for(int i = 1; i <= c0; ++i){
            int rem = n - i;
            if(rem < c1) break;
            S_total = (S_total + nCr(rem, c1)) % MOD;
        }


        int64 term1 = ways % MOD * ((int64)c0 * c1 % MOD) % MOD;
        term1 = term1 * inv2 % MOD;
        int64 term2 = (int64)c1 * S_total % MOD;

        int64 ans = (term1 - term2) % MOD;
        if(ans < 0) ans += MOD;
        cout << ans << '\n';
    }
    return 0;
}
