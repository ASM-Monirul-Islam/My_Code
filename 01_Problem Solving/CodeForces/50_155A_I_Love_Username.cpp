#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	int max_score = v[0], min_score = v[0], amazing = 0;
	for(auto i: v) {
		if(i<min_score) {
			min_score = i;
			amazing++;
		}else if(i>max_score) {
			max_score = i;
			amazing++;
		}
	}
	cout<<amazing<<endl;
	return 0;
}