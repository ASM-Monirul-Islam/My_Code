#include<bits/stdc++.h>
using namespace std;
/*
n = applicants
m = free apartments
k = max allowed difference
a(1-n) = desired size of each applicants [x-k <= .. <= x+k]
b(1-m) = size of each apartments
*/

int gotAppartments(vector<int>&a, vector<int>&b, int k) {
	int n = a.size(), m = b.size(), i=0, j=0, count=0, s1, s2;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	while(i<n and j<m) {
		s1=a[i]-k;
		s2=a[i]+k;
		if(b[j]>=s1 and b[j]<=s2) {
			count++;
			i++;
			j++;
		}else if(b[j]<s1) {
			j++;
		}else  {
			i++;
		}
	}
	return count;
}

int main() {
	int n, m, k;
	cin>>n>>m>>k;
	vector<int>a(n), b(m);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<m; i++) {
		cin>>b[i];
	}
	int ans = gotAppartments(a, b, k);
	cout<<ans<<endl;
	return 0;
}