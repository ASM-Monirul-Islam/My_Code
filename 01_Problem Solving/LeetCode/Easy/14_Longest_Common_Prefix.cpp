class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s= strs[0].size();
        for(int i=1; i<strs.size(); i++) {
            if(s>strs[i].size()) {
                s=strs[i].size();
            }
        }
        bool break_loop = false;
        string str;
        int i;
        int j=0;
        while(j<s) {
            for(i=0; i<strs.size()-1; i++) {
                if(strs[i][j]!=strs[i+1][j]) {
                    break_loop=true;
                    break;
                }
            }
            if(break_loop) {
                break;
            }
            str.push_back(strs[i][j]);
            j++;
        }
        return str;
    }
};