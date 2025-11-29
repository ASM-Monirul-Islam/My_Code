#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";

bool not_distranted(string tasks) {
	unordered_map<char, bool>task_done;
	stack<char>st;
	for(char ch:tasks) {
		if(!task_done[ch]) {
			task_done[ch]=true;
			st.push(ch);
		}else {
			if(st.top()!=ch) {
				return false;
			}else {
				st.push(ch);
			}
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		cin.ignore();
		string tasks;
		cin>>tasks;
		cout<<(not_distranted(tasks) ? "YES" : "NO")<<endl;
	}
	return 0;
}