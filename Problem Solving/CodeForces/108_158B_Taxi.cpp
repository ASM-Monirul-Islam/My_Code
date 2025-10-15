#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int taxi(vector<int>&v) {
		int n = v.size();
		sort(v.rbegin(), v.rend());
		for(int i=0; i<n; i++) {
			if(v[i]==4) continue;
			else {
				if(i<(n-1) and v[i]+v[n-1]<=4) {
					v[i]+=v[n-1];
					v.erase(v.begin()+(n-1));
					n--;
					i--;
				}
			}
		}
		return v.size();
	}

};

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	Solution obj;
	cout<<obj.taxi(v)<<endl;
	return 0;
}