#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	int maxVal = *max_element(v.begin(), v.end());
	vector<int>dislike_list;
	int x = 0, y = 0;
	while(x<maxVal) {
		y++;
		if(y%3==0 or y%10==3) {
			continue;
		}else {
			dislike_list.push_back(y);
			x++;
		}
	}
	for(int i:v) {
		cout<<dislike_list[i-1]<<endl;
	}
	return 0;
}