#include<bits/stdc++.h>
using namespace std;

bool isPrime(int m) {
    for(int i=2; i*i<=m; i++) {
        if(m%i==0) {
            return false;
        }
    }
    return true;
}

int prime_exists(int n, int m) {
    int count = 0;
    for(int i=(n+1); i<=m; i++) {
        bool prime = true;
        for(int j=2; j*j<=i; j++) {
            if(i%j==0) {
                prime = false;
                continue;
            }
        }
        if(prime) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin>>n>>m;
    if(isPrime(m)) {
        int count = prime_exists(n, m);
        if(count==1) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}