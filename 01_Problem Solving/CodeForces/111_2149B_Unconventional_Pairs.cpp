#include<bits/stdc++.h>
using namespace std;

int diff(vector<int>&arr) {
    int n = arr.size();
    int l=0, r=1, dif, maxDif=INT_MIN;
    sort(arr.begin(), arr.end());
    while(r<n) {
        dif = abs(arr[l]-arr[r]);
        maxDif = max(dif, maxDif);
        l+=2;
        r+=2;
    }
    return maxDif;
}

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        cout<<diff(arr)<<endl;
    }
    return 0;
}