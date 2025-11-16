#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    unordered_map<string, int> balance;
    vector<pair<string, int>> spending_list;

    string name;
    int expense;

    for (int i = 0; i < q; i++) {
        cin >> name >> expense;

        if (balance.find(name) == balance.end()) 
			balance[name] = 100;
        balance[name] -= expense;
        spending_list.emplace_back(name, expense);
    }

    string tax_payer = "";
    int max_streak = 0;
    int streak = 1;

    for (int i = 1; i < spending_list.size(); i++) {
        if (spending_list[i].first == spending_list[i-1].first) {
            streak++;
        } else {
            if (streak > max_streak) {
                max_streak = streak;
                tax_payer = spending_list[i-1].first;
            }
            streak = 1;
        }
    }

    if (streak > max_streak) {
        max_streak = streak;
        tax_payer = spending_list.back().first;
    }

	for (auto &p : balance) {
		if(p.first==tax_payer)
        	p.second -= max_streak * (n-1);
		else
			p.second += max_streak;
    }

    for (auto &p : balance) {
        p.second -= max_streak * (n-1);
    }
    int min_balance = INT_MAX;
	int max_balance = INT_MIN;

	for (auto &p : balance) {
	    min_balance = min(min_balance, p.second);
	    max_balance = max(max_balance, p.second);
	}

	cout << (max_balance - min_balance) << "\n";

    return 0;
}