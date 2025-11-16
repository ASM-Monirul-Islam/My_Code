#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, ways, attaciing_ways;
    cin>>k;
    for(long long i=1; i<=k; i++) {
        ways=i*i*(i*i-1)/2;
        attaciing_ways=4*(i-1)*(i-2);
        long long totalWays=ways-attaciing_ways;
        cout<<totalWays<<endl;
    }
    return 0;
}