class Solution {
public:

    void backtrack(vector<int>&nums, int start, vector<vector<int>>&solution, vector<int>&current) {
        solution.push_back(current);
        for(int i=start; i<nums.size(); i++) {
            if(i>start and nums[i]==nums[i-1]) continue;
            current.push_back(nums[i]);
            backtrack(nums, i+1, solution, current);
            current.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>current;
        vector<vector<int>>solution;
        backtrack(nums, 0, solution, current);
        return solution;
    }
};