#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin>>t)) return 0;
    while(t--){
        int n; cin>>n;
        vector<int>a(n), b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int X = 0;
        for(int i=0;i<n;i++){ X ^= a[i]; X ^= b[i]; }
        if(X == 0){
            cout << "Tie\n";
            continue;
        }
        int k = 31 - __builtin_clz(X); 
        int lastIdx = -1;
        for(int i=0;i<n;i++){
            int ai = (a[i] >> k) & 1;
            int bi = (b[i] >> k) & 1;
            if(ai != bi) lastIdx = i; 
        }
        if((lastIdx % 2) == 0) cout << "Ajisai\n"; 
        else cout << "Mai\n";
    }
    return 0;
}
