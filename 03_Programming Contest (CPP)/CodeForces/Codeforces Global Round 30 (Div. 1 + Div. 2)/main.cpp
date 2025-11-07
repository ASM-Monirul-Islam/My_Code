#include<bits/stdc++.h>
using namespace std;

struct mons{
	int b, c;
};

bool cmp(const mons a, const mons b) {
	return a.c>b.c;
}

int main() {
	int t, n, m, damage, count;
	cin>>t;
	while(t--) {
		count=0;
		cin>>n>>m;
		vector<int>x;
		for(int i=0; i<n; i++) {
			cin>>damage;
			x.push_back(damage);
		}
		vector<mons>monster(m);
		for(int i=0; i<m; i++) {
			cin>>monster[i].b;
		}
		for(int i=0; i<m; i++) {
			cin>>monster[i].c;
		}
		sort(monster.begin(), monster.end(), cmp);
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(x[i]>=monster[j].b) {
					if(monster[j].c>0) {
						x.push_back(max(monster[j].c, x[i]));
						n++;
					}
					x.erase(x.begin()+i);
					monster.erase(monster.begin()+j);
					n--;
					m--;
					i--;
					j--;
					count++;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}