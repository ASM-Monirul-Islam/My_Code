#include<bits/stdc++.h>
using namespace std;

int DamagedDragon(vector<bool>&damaged, int n) {
	int count=0;
	for(int i=n-1; i<damaged.size(); i+=n) {
		if(!damaged[i]){
			damaged[i]=true;
			count++;
		}
	}
	return count;
}

int main() {
	int k, l, m, n, d;
	cin>>k>>l>>m>>n>>d;
	vector<bool>damaged(d, false);
	int totalNumber = DamagedDragon(damaged, k)+DamagedDragon(damaged, l)+DamagedDragon(damaged, m)+DamagedDragon(damaged, n);
	cout<<totalNumber<<endl;
	return 0;
}