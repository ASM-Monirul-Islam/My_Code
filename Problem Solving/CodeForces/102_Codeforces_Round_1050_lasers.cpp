#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, x, y;
    cin>>t;
    while(t--) {
        cin>>n>>m>>x>>y;
        vector<int>a(n);
        vector<int>b(m);
        int count=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]<=y) {
                count++;
            }
        }
        for(int i=0; i<m; i++) {
            cin>>b[i];
            if(b[i]<=x) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}