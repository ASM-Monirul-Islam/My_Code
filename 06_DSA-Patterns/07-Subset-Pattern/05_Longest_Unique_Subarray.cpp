/*
Problem Statement (General Form)

You are given a sequence of elements (for example, integers representing songs in a playlist).
Your task is to determine the length of the longest contiguous subsequence (or subarray) in which
all elements are distinct — that is, no element repeats within the subsequence.

Input
A positive integer n — the length of the sequence.
A sequence of n elements a₁, a₂, …, aₙ.

Output
A single integer — the length of the longest contiguous subarray containing all unique elements.

Constraints (generalized)
1 ≤ n ≤ 10^5 (or any reasonably large size)
Elements can be integers, strings, or any comparable type.

Example

Input:
7
1 2 1 3 2 7 4


Output:
5


Explanation:
The longest subarray with all unique elements is [1, 3, 2, 7, 4], which has length 5.

Key Concept
This is the “Longest Subarray with All Distinct Elements” problem — a classic sliding window problem.
Maintain a window of unique elements.
Expand it to include new elements, and shrink it from the left if a duplicate is encountered.
Keep track of the maximum length seen so far.
*/

#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>&nums) {
	int n = nums.size(), left=0, maxSeq=0;
	unordered_map<int, int>freq;
	for(int right=0; right<n; right++) {
		freq[nums[right]]++;

		while(freq[nums[right]]>1) {
			freq[nums[left]]--;
			if(freq[nums[left]]==0) freq.erase(nums[left]);
			left++;
		}

		maxSeq=max(maxSeq, right-left+1);
	}
	return maxSeq;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>nums(n);
	for (int i=0; i<n; i++) {
		cin>>nums[i];
	}
	cout<<solution(nums)<<endl;
	return 0;
}