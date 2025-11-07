#include<bits/stdc++.h>
using namespace std;

vector<int>permutations(int n) {
	vector<int>ans;
	for(int i=2; i<=n; i+=2) {
		ans.push_back(i);
	}
	for(int i=1; i<=n; i+=2) {
		ans.push_back(i);
	}
	return ans;
}

int main() {
	int n;
	cin>>n;
	if(n==1) {
		cout<<1<<endl;
	}else if(n<4) {
		cout<<"NO SOLUTION"<<endl;
	} else {
		vector<int>ans=permutations(n);
		for(auto &i: ans) {
			cout<<i<<" ";
		}
	}
	return 0;
}