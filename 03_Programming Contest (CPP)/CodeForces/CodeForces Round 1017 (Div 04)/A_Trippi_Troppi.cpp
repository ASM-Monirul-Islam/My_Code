#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<char>short_form(string s) {
		vector<char>ans;
		ans.push_back(s[0]);
		for(int i=1; i<s.size(); i++) {
			if(isspace(s[i])) {
				ans.push_back(s[i+1]);
			}
		}
		return ans;
	}
};

int main() {
	Solution obj;
	int n;
	string s;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++) {
		getline(cin, s);
		vector<char>ans = obj.short_form(s);
		for(auto &c:ans) {
			cout<<c;
		}
		cout<<endl;
		ans.clear();
	}
	
	return 0;
}