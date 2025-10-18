class Solution {
public:
    void finalArr(vector<int>&ans, int n) {
        if(n==0) {
            if(ans[n]+1<=9) {
                ans[n]++;
                return;
            }else {
                ans[n]=0;
                ans.insert(ans.begin()+0, 1);
                return;
            }
        }
        if(ans[n]+1<=9 and n!=0) {
            ans[n]++;
        }
        else {
            ans[n]=0;
            finalArr(ans, n-1);
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        vector<int>ans(digits);
        finalArr(ans, n);
        return ans;
    }
};