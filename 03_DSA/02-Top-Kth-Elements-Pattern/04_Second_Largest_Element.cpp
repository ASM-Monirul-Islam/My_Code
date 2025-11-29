// Given an array of positive integers arr[], return the second largest element from the array.
// If the second largest element doesn't exist then return -1.
// Note: The second largest element should not be equal to the largest element.


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        sort(arr.begin(), arr.end());
        auto i = unique(arr.begin(), arr.end());
        arr.erase(i, arr.end());
        
        if(arr.size()==1) return -1;

        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<2; i++) {
            pq.push(arr[i]);
        }
        for(int i=2; i<arr.size(); i++) {
            if(arr[i]>pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
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
	int ans = obj.getSecondLargest(arr);
	cout<<ans<<endl;
	return 0;
}