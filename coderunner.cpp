#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v, int n, int k) {
    priority_queue<int>p;
    for(int i=0; i<k; i++) {
        p.push(v[i]);
    }
    for(int i=k; i<n; i++) {
        if(p.top()>v[i]) {
            p.pop();
            p.push(v[i]);
        }
    }
    return p.top();
}

int main() {
    int n, k;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    cin>>k;
    int ans = solve(v, n, k);
    cout<<ans<<endl;
    return 0;
}