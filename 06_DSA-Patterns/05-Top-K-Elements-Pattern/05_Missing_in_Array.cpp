/*
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 
1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one 
element missing. Your task is to identify and return the missing element.

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.

Input: arr[] = [1]
Output: 2
Explanation: Only 1 is present so the missing element is 2.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++) {
            if(arr[i]!= (i+1)) return i+1;
        }
        return arr[n-1]+1;
    }
};

int main() {
	Solution obj;
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int ans = obj.missingNum(arr);
	cout<<ans<<endl;
	return 0;
}