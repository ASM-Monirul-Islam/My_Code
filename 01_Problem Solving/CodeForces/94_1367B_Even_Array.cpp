#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>&rem) {
    int s1, s0, c1, c0;
    int n = rem.size();
    if(n%2==0) {
        s1=n/2;
        s0=s1;
    }else {
        s1=n/2;
        s0= s1+1;
    }
    c1=count(rem.begin(), rem.end(), 1);
    c0=count(rem.begin(), rem.end(), 0);
    if(c1==s1 and c0==s0) return true;
    else return false;
}

int moves(vector<int>&arr) {
    int n = arr.size();
    vector<int>rem(n);
    for(int i=0; i<n; i++) {
        rem[i]=arr[i]%2;
    }
    if(!possible(rem)) return -1;
    int count=0;
    for(int i=0; i<n; i++) {
        if((i%2)!=rem[i]) count++;
    }
    return count/2;
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
        int ans = moves(arr);
        cout<<ans<<endl;
    }
    return 0;
}