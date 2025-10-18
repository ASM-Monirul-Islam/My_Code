#include<bits/stdc++.h>
using namespace std;

int total_edit_distance(string s) {
	int left=0,  right=(s.length()-1), count=0;
	while(left<right) {
		if(s[left]!=s[right]) {
			if(s[left]<s[right]) {
				s[right]=s[left];
			}else {
				s[left]=s[right];
			}
			count++;
		}
		left++;
		right--;
	}
	return count;
}

int main() {
	int t;
	cin>>t;
	string s;
	while(t--) {
		cin>>s;
		int count = total_edit_distance(s);
		cout<<count<<endl;
	}
	return 0;
}