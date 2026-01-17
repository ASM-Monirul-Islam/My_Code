#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()

{
    ll t;
    cin>>t;
    while(t--) {
        ll n, value, total=0;
        cin>>n;
        vector<ll>oddArr, evenArr;
        for(ll i=0; i<n; i++) {
            cin>>value;
            if(value&1) oddArr.push_back(value);
            else evenArr.push_back(value);
        }
        if(!oddArr.empty()) {
            sort(oddArr.rbegin(), oddArr.rend());

            ll oddSize = oddArr.size();

            if(oddSize&1) oddSize = (oddSize/2)+1;
            else oddSize/=2;

            for(ll i=0; i<oddSize; i++) {
                total+=oddArr[i];
            }
            for(int i=0; i<evenArr.size(); i++) {
                total+=evenArr[i];
            }
        }
        cout<<total<<endl;

    }
    return 0;
}