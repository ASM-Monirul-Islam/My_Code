#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<int>&nums, int start, vector<vector<int>>&solution, vector<int>&current) {
	solution.push_back(current);
	for(int i=start; i<nums.size(); i++) {
		current.push_back(nums[i]);
		backtrack(nums, i+1, solution, current);
		current.pop_back();
	}
}

vector<vector<int>>Subset(vector<int>&nums) {
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