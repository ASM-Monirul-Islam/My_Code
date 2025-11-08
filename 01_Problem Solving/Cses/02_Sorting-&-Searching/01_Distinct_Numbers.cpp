#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>num(n);
	unordered_map<int, int>freq;
	for(int i=0; i<n; i++) {
		cin>>num[i];
		freq[num[i]]++;
	}
	cout<<freq.size()<<endl;
	return 0;
}