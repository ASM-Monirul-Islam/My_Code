#include<bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	if(x>=1 and x<=100){
		if(x!=2){
			if(x%2==0){
				cout<<"YES\n";
			} else {
				cout<<"NO\n";
			}
		} else {
			cout<<"NO\n";
		}
	}
	return 0;
}