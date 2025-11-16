// filepath: solution.cpp
#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin>>T)) return 0;
    while(T--){
        int64 A,B,M;
        cin>>A>>B>>M;
        // find minimal t s.t. (1<<t)-1 >= M
        int t = 0;
        while(true){
            unsigned long long val = ((1ULL<<t) - 1ULL);
            if(val >= (unsigned long long)M) break;
            ++t;
            // safe because M <= 1e9 -> t will not exceed ~31
        }
        int r = max(0, t-1);
        unsigned long long m = 1ULL<<r;
        unsigned long long res = m - 1ULL;
        // use signed 64-bit for arithmetic but be careful converting
        auto floor_div = [&](long long x, unsigned long long d)-> long long {
            // compute floor(x / d)
            // in C++ integer division of negative by positive truncates toward 0,
            // so adjust for negatives to get floor.
            if(x >= 0) return x / (long long)d;
            // floor for negative: (x - (d-1)) / d
            return - ( ( ( -x ) + (long long)d - 1 ) / (long long)d );
        };
        long long left = A - 1;
        long long cnt = floor_div((long long)B - (long long)res, m) - floor_div(left - (long long)res, m);
        if(cnt < 0) cnt = 0;
        cout << cnt << '\n';
    }
    return 0;
}