#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, timeLeft, time=0;
	cin>>n>>k;
	timeLeft = 240-k;
	int i=0;
	while(i<n) {
		i++;
		time+=(5*i);
		if(time>timeLeft) {
			i--;
			break;
		}
	}
	cout<<i<<endl;
	return 0;
}