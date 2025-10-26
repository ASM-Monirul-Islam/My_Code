#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;

    for (int i = 0; i < s.size(); i++) {
        // convert character to digit
        int digit = s[i] - '0';

        // build the number
        num = num * 10 + digit;
    }
        return num;
    }
};

int main() {
    Solution obj;
    string s;
    cin>>s;
    cout<<obj.myAtoi(s)<<endl;
    return 0;
}