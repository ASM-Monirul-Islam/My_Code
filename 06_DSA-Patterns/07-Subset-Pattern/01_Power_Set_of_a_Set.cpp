/*
Name: Generate All Subsets (Power Set) Using Backtracking
Description:
This C++ program generates all possible subsets (the power set) of a given array of 
integers using backtracking. It explores every combination by recursively including 
or excluding each element and stores the results in a vector of vectors. The subsets 
are then printed in a JSON-like format.

Time Complexity: O(n × 2ⁿ)
Space Complexity: O(n × 2ⁿ)

Input:
4
1 2 3 4

Output:
[[],[1],[1,2],[1,2,3],[1,2,3,4],[1,2,4],[1,3],[1,3,4],[1,4],[2],[2,3],[2,3,4],[2,4],[3],[3,4],[4]]
*/


#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&nums, int start, vector<vector<int>>&solution, vector<int>&current) {
	solution.push_back(current);
	for(int i=start; i<nums.size(); i++) {
		if (i > start && nums[i] == nums[i - 1]) continue;
		current.push_back(nums[i]);
		backtrack(nums, i+1, solution, current);
		current.pop_back();
	}
}

vector<vector<int>>Subset(vector<int>&nums) {
	sort(nums.begin(), nums.end());
	vector<vector<int>>solution;
	vector<int>current;
	backtrack(nums, 0, solution, current);
	return solution;
}

int main() {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	cout<<"[";
	vector<vector<int>>solution = Subset(nums);
	for(int i=0; i<solution.size(); i++) {
		cout<<"[";
		int k=0;
		for(auto &j:solution[i]) {
			cout<<j;
			if(k<solution[i].size()-1) cout<<",";
			k++;
		}
		cout<<"]";
		if(i<solution.size()-1) cout<<",";
	}
	cout<<"]";
	return 0;
}

