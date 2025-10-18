#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, output;
	cin>>n;
	while(n--) {
		cin>>a>>b;
		if(a%b==0) {
			output=0;
		} else {
			if(a>b) {
				output = (((a/b)+1)*b)-a;
			} else {
				output= (b-a);
			}
		}
		cout<<output<<endl;
	}
	return 0;
}