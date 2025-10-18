class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        while (n >= 0 && s[n] == ' '){
            n--;
        }
        int count=0;
        for(int i=n; i>=0; i--) {
            if(s[i]==' ') break;
            count++;
        }
        return count;
    }
};