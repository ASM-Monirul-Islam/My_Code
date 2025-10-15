#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, crime=0, police=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	for(auto i: v) {
		if(i== -1) {
			if(police>0) {
				police--;
			}else {
				crime++;
			}
		}else {
			police+=i;
		}
	}
	cout<<crime<<endl;
	return 0;
}