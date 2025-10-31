#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    unordered_map<int, int>freq;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>k;
    int sum=0, maxSum=0;
    for(int i=0; i<k; i++) {
        sum+=arr[i];
        freq[arr[i]]++;
    }
    if(freq.size()==k) {
        maxSum=sum;
    }
    for(auto &i:freq) {
        cout<<i.first<<"->"<<i.second<<endl;
    }
    cout<<endl;
    for(int i=k; i<arr.size(); i++) {
        freq[arr[i-k]]--;
        if(freq[arr[i-k]]==0)
        freq[arr[i]]++;
        sum+=(arr[i]-arr[i-k]);
        if(freq.size()==k) {
            maxSum=max(maxSum, sum);
        }
        for(auto &i:freq) {
        cout<<i.first<<"->"<<i.second<<endl;
        }
        cout<<"max "<<maxSum<<endl<<endl;
    }
    return 0;
}