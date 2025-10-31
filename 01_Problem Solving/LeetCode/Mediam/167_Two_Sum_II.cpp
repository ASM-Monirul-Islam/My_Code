class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size()-1, sum;
        while(start<end) {
            sum=numbers[start]+numbers[end];
            if(sum==target) break;
            else if(sum>target) end--;
            else start++;
        }
        return {++start, ++end};
    }
};