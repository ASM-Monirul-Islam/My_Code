#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, sum=0;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="X++" or s=="x++" or s=="++x" or s=="++X") {
			sum++;
		} else if(s=="X--" or s=="x--" or s=="--x" or s=="--X") {
			sum--;
		}
	}
	cout<<sum<<endl;
	return 0;
}