#include<bits/stdc++.h>
using namespace std;

long long mod(long long x, long long y, long long n) {
    return (n - ((n - y) % x));

}

int main() {
    int t;
    long long x, y, n;
    cin>>t;
    while(t--) {
        cin>>x>>y>>n;
        long long k = mod(x,y,n);
        cout<<k<<endl;
    }
    return 0;
}