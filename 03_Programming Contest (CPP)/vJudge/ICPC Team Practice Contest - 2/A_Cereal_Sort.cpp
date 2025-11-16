#include<bits/stdc++.h>
using namespace std;

long long solution(vector<long long>&arr, unordered_map<long long, long long>&freq) {
	long long time=0, n=arr.size();
	if(arr.size()==1) return 1;
	set<long long>s(arr.begin(), arr.end());
	for(auto &i:s) {
		time+=n;
		n-=freq[i];
	}
	return time;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin>>n;
	vector<long long>arr(n);
	unordered_map<long long, long long>freq;
	for (long long i=0; i<n; i++) {
		cin>>arr[i];
		freq[arr[i]]++;
	}
	cout<<solution(arr, freq)<<endl;
	return 0;
}