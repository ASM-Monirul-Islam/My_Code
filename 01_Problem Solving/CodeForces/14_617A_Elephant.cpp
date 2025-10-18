#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, count=0;
	cin>>n;
	while(true){
		if(n<=5) {
			count++;
			break;
		} else {
			n-=5;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}