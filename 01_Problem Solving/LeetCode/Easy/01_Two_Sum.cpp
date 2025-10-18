class Solution {
public:
    vector<int> ans;
    vector<int> twoSum(vector<int>& nums, int target) { 
        int n = nums.size(); 
        for(int i=0; i<n; i++) {
            target-=nums[i];
            for(int j=i+1; j<n; j++) {
                if(target==nums[j]) {
                    ans.push_back(min(i,j));
                    ans.push_back(max(i,j));
                    break;
                }
            }
            target+=nums[i];
        }
        return ans;
    }
};