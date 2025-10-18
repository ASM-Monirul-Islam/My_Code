#include<bits/stdc++.h>
using namespace std;

bool stair(int a, int b, int c) {
	return (b>a and b<c);
}

bool peak(int a, int b, int c){
	return (b>a and b>c);
}

int main() {
	int t, a, b, c;
	cin>>t;
	while(t--) {
		cin>>a>>b>>c;
		if(stair(a,b,c)) {
			cout<<"STAIR"<<endl;
		}else if(peak(a,b,c)) {
			cout<<"PEAK"<<endl;
		}else {
			cout<<"NONE"<<endl;
		}
	}
	return 0;
}