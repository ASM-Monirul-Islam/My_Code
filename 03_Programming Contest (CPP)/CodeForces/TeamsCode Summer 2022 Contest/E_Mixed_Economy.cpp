#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q, expense;
	string s;
	cin>>n>>q;
	unordered_map<string, int>person;
	vector<pair<string, int>>spending_list;
	for(int i=0; i<q; i++) {
		cin>>s>>expense;
		if(person.find(s)==person.end()) {
			person[s]=100;
		}
		person[s]-=expense;
		spending_list.emplace_back(s, expense);
	}
	int streak=1, maxStreak=0;
	string tax_payer="";
	for(int i=1; i<q; i++) {
		if(spending_list[i].first==spending_list[i-1].first) {
			streak++;
		}else {
			if(streak>maxStreak) {
				tax_payer=spending_list[i-1].first;
				maxStreak=streak;
			}
			streak=1;
		}
	}

	// if (streak > maxStreak) {
    //     tax_payer = spending_list.back().first;
    //     maxStreak = streak;
    // }

	for(auto &p:person) {
		if(p.first==tax_payer) {
			p.second-=(maxStreak*(n-1));
		}else {
			p.second+=maxStreak;
		}
	}

	int min_balance=INT_MAX;
	int max_balance=INT_MIN;

	for(auto &i:person) {
		min_balance=min(i.second, min_balance);
		max_balance=max(i.second, max_balance);
	}

	cout<<max_balance-min_balance<<endl;
	return 0;
}