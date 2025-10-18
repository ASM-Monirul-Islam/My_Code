class Solution {
public:

    void backtrack(vector<int>&nums, int start, vector<int>&current, vector<vector<int>>&solution) {
        solution.push_back(current);
        for(int i=start; i<nums.size(); i++) {
            current.push_back(nums[i]);
            backtrack(nums, i+1, current, solution);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        vector<vector<int>>solution;
        backtrack(nums, 0, current, solution);
        return solution;
    }
};