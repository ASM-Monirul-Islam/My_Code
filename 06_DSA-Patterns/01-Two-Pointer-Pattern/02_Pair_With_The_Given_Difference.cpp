/*
Given an unsorted array and an integer x, the task is to find if there exists 
a pair of elements in the array whose absolute difference is x. 

Examples: 

Input: arr[] = [5, 20, 3, 2, 50, 80], x = 78
Output: Yes
Explanation: The pair is {2, 80}.

Input: arr[] = [90, 70, 20, 80, 50], x = 45
Output: No
Explanation: No such pair exists.
*/

#include<bits/stdc++.h>
using namespace std;

bool is_diff(vector<int>&arr, int diff) {
	sort(arr.begin(), arr.end());
	int start=0, end=arr.size()-1, df;
	while(start<end) {
		df=arr[end]-arr[start];
		if(df==diff) return true;
		else if(df>diff) start++;
		else end--;
	}
	return false;
}

int main() {
	int n, diff;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cin>>diff;
	bool ans = is_diff(arr, diff);
	if(ans) {
		cout<<"Yes"<<endl;
	}else {
		cout<<"No"<<endl;
	}
	return 0;
}