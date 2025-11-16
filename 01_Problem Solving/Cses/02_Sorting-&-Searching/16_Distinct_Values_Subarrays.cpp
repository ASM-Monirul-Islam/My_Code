#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, val;
	cin>>n;
	vector<long long>arr(n);
	for (long long i=0; i<n; i++) {
		cin>>arr[i];
	}
	unordered_map<long long, long long>freq;
	long long ans=0, i=0;
	for(long long j=0; j<n; j++) {
		freq[arr[j]]++;
		while(freq[arr[j]]>1) {
			freq[arr[i]]--;
			if(freq[arr[i]]==0) {
				freq.erase(arr[i]);
			}
			i++;
		}
		ans+=(j-i+1);
	}
	cout<<ans<<endl;
	return 0;
}