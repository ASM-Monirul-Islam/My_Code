class Solution {
public:
    int robber(vector<int>&arr) {
        int n = arr.size();
        if(n==1) return arr[0];
        if(n==2) return max(arr[0], arr[1]);
        int curr, prev1=max(arr[0], arr[1]), prev2=arr[0];
        for(int i=2; i<n; i++) {
            curr = max(arr[i]+prev2, prev1);
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int>arr1(n-1);
        vector<int>arr2(n-1);
        for(int i=0; i<n-1; i++) {
            arr1[i]=nums[i];
        }
        for(int i=1; i<n; i++) {
            arr2[i-1]=nums[i];
        }
        return max(robber(arr1), robber(arr2));
    }
};