#include<bits/stdc++.h>
using namespace std;

int minGondola(vector<int>&weight, int x) {
	int n=weight.size();
	int start=0, end=n-1, count=0;
	sort(weight.begin(), weight.end());
	while(start<=end) {
		int wt = weight[start]+weight[end];
		if(wt<=x) {
			start++;
		}
		end--;
		count++;
	}
	return count;
}

int main() {
	int n, x;
	cin>>n>>x;
	vector<int>weight(n);
	for(int i=0; i<n; i++) {
		cin>>weight[i];
	}
	int ans = minGondola(weight, x);
	cout<<ans<<endl;
	
	return 0;
}