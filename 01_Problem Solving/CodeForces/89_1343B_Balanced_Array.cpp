#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		if(n<=2) {
			cout<<"NO"<<endl;
			continue;
		}
		vector<int>evenArr;
		vector<int>oddArr;
		for(int i=2; i<=n; i+=2) {
			evenArr.push_back(i);
		}
		for(int i=1; i<n-1; i+=2) {
			oddArr.push_back(i);
		}
		int lastOdd = 3*(n/2)-1;
		if(lastOdd%2==0) {
			cout<<"NO"<<endl;
			continue;
		}
		oddArr.push_back(lastOdd);
		int evenSum = accumulate(evenArr.begin(), evenArr.end(), 0);
		int oddSum = accumulate(oddArr.begin(), oddArr.end(), 0);
		if(evenSum!=oddSum) {
			cout<<"NO"<<endl;
			continue;
		}else {
			cout<<"YES"<<endl;
			vector<int>arr(evenArr);
			arr.insert(arr.end(), oddArr.begin(), oddArr.end());
			for(auto i:arr) {
				cout<<i<<" ";
			}
			cout<<endl;
		}
		evenArr.clear();
		oddArr.clear();
	}
	return 0;
}