#include<bits/stdc++.h>
using namespace std;

int max_avg(vector<int>&arr) {
    int n = arr.size();
    int r = n-1;
    int sum=accumulate(arr.begin(), arr.end(), 0);
    int avg, maxAvg;
    avg = sum/n;
    maxAvg=avg;
    sort(arr.rbegin(), arr.rend());
    while(r>0) {
        sum-=arr[r];
        avg=sum/r;
        maxAvg=max(avg, maxAvg);
        r--;
    }
    return maxAvg;
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
        int ans = max_avg(arr);
        cout<<ans<<endl;
    }
    return 0;
}