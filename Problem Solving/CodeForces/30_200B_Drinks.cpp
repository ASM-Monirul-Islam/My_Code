#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	double sum=0.0;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		sum+=(v[i]/100.0);
	}
	cout<<fixed<<setprecision(12)<<(sum*100.0)/n<<endl;
	return 0;
}