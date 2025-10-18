class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string temp(s);
        reverse(temp.begin(), temp.end());
        if(temp==s) {
            return true;
        }else {
            return false;
        }
    }
};