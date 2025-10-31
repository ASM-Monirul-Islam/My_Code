class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0, maxSum=0;
        unordered_map<long long, long long>freq;
        for(int i=0; i<k; i++) {
            sum+=nums[i];
            freq[nums[i]]++;
        }
        if(freq.size()==k) {
            maxSum=sum;
        }
        for(int i=k; i<nums.size(); i++) {
            sum+=(nums[i]-nums[i-k]);
            freq[nums[i-k]]--;
            freq[nums[i]]++;
            if(freq[nums[i-k]]==0) freq.erase(nums[i-k]);
            if(freq.size()==k) {
                maxSum=max(sum, maxSum);
            }
        }
        return maxSum;
    }
};