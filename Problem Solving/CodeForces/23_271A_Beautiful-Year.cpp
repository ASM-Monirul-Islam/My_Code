#include<bits/stdc++.h>
using namespace std;

bool check(int n, string s){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(s[i]==s[j]) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	int y, _y;
	cin>>y;
	y++;
	while(true){
		_y=y;
		string s=to_string(_y);
		if(check(s.length(), s)){
			y++;
		} else{
			break;
		}
	}
	cout<<y<<endl;
	return 0;
}