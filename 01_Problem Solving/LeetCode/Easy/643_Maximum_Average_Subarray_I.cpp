class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0.0, avg, max_avg;
        for(int i=0; i<k; i++) {
            sum+=nums[i];
        }
        avg=sum/k;
        max_avg=avg;
        for(int i=k; i<nums.size(); i++) {
            sum+= nums[i]-nums[i-k];
            avg=sum/k;
            max_avg=max(max_avg, avg);
        }
        return max_avg;
    }
};