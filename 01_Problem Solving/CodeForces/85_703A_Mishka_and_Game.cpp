#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, c, m_points=0, c_points=0;
	cin>>n;
	while(n--) {
		cin>>m>>c;
		if(m>c) {
			m_points++;
		}else if(m<c) {
			c_points++;
		}
	}
	if(m_points>c_points) {
		cout<<"Mishka"<<endl;
	}else if(m_points<c_points) {
		cout<<"Chris"<<endl;
	}else {
		cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}