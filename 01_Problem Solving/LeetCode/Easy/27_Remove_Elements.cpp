class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto i = remove(nums.begin(), nums.end(), val);
        nums.erase(i, nums.end());
        return nums.size();
    }
};