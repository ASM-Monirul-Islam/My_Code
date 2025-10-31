class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0, distinct_subarray=0;
        while((i+3)<=s.size()) {
            char a = s[i];
            char b = s[i+1];
            char c = s[i+2];
            if(a!=b and a!=c and b!=c) distinct_subarray++;
            i++;
        }
        return distinct_subarray;
    }
};