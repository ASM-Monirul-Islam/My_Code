#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int count(int n) {
		int current, next1=1, next2=0;
		for(int i=n-1; i>=0; i--) {
			current = next1+next2;
			next2=next1;
			next1=current;
		}
		return current;
	}
};

int main() {
	Solution obj;
	int n;
	cin>>n;
	int ways = obj.count(n);
	cout<<ways<<endl;
	return 0;
}