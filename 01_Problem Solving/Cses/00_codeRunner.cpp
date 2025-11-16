#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s.size()==1) {
        cout<<1<<endl;
        return 0;
    }
    int left=0,right=1, repeat=1, longRepeat=1;
    while(right<s.size()) {
        if(s[right]!=s[left]) {
            repeat=1;
            left=right;
        }
        longRepeat=max(repeat, longRepeat);
        repeat++;
        right++;
    }
    cout<<longRepeat<<endl;
    return 0;
}