#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, sereja_points=0, dima_points=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	bool sereja_turn = true;
	int left = 0, right = n-1, points;
	while(left<=right) {
		if(v[left]>v[right]) {
			points = v[left];
			left++;
		}else {
			points = v[right];
			right--;
		}
		if(sereja_turn) {
			sereja_points+=points;
		}else {
			dima_points+=points;
		}
		sereja_turn = !sereja_turn;
	}
	cout<<sereja_points<<" "<<dima_points<<endl;
	return 0;
}