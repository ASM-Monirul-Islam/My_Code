#include <bits/stdc++.h>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define ll long long
#define MOD 998244353
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int N;
    cin >> N;
    vector<int> freq(2001, 0);
    vector<int> uniq;

    for(int i=0;i<N;i++){
        int x; cin >> x;
        freq[x]++;
    }

    for(int i=1;i<=2000;i++){
        if(freq[i] > 1){
            cout << 0 << "\n";
            return 0;
        }
        if(freq[i] == 1) uniq.push_back(i);
    }

    long long ans = 1;
    int sz = uniq.size();
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            ans = (ans * (uniq[i] ^ uniq[j])) % MOD;
        }
    }

    cout << ans << "\n";
    return 0;
}