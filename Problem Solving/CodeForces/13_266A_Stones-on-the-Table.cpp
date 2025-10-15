#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, count=0;
	cin>>n;
	vector<char>ch(n);
	for(int i=0; i<n; i++) {
		cin>>ch[i];
	}

	for(int i=0; i<n; i++) {
		if(ch[i]==ch[i+1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}