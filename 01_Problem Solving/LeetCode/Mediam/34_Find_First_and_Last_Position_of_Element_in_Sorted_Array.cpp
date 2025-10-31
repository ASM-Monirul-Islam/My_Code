class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, first=-1, last=-1, mid;

	    //First Occurence
	    while(left<=right) {
	    	mid=(left+right)/2;
	    	if(nums[mid]==target) {
	    		first=mid;
	    		right=mid-1;
	    	}else if(target<nums[mid]) {
	    		right=mid-1;
	    	}else {
	    		left=mid+1;
	    	}
	    }

	    //Last Occurence
	    left=0, right=nums.size()-1;
	    while(left<=right) {
	    	mid=(left+right)/2;
	    	if(nums[mid]==target) {
	    		last=mid;
	    		left=mid+1;
	    	}else if(target<nums[mid]) {
	    		right=mid-1;
	    	}else {
	    		left = mid+1;
	    	}
	    }
	    return {first, last};
    }
};