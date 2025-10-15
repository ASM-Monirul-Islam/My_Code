#include<bits/stdc++.h>
using namespace std;
 
int operations(vector<int>&target) {
    int n = target.size();
    sort(target.begin(), target.end());
    for(auto i:target) {
        if(i==0) {
            target.erase(find(target.begin(), target.end(), 0));
        }
    }
    auto i = unique(target.begin(), target.end());
    target.erase(i, target.end());
    int new_n = target.size();
    return ((new_n*2)-1);
}
 
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int>target(n);
        for(int i=0; i<n; i++) {
            cin>>target[i];
        }
        int op = operations(target);
        cout<<op<<endl;
        target.clear();
    }
    return 0;
}