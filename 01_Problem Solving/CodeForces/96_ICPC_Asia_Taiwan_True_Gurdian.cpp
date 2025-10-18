#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long t, a,  b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        if(a+2 == b) {
            if(isPrime(a) and isPrime(b)) {
                cout<<"Y"<<endl;
            } else {
                cout<<"N"<<endl;
            }
        }else {
            cout<<"N"<<endl;
        }
    }
    return 0;
}