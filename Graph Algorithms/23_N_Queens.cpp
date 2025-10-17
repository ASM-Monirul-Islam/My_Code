#include<bits/stdc++.h>
using namespace std;

bool is_safe(vector<vector<char>>&solution, int row, int col) {
	int n = solution.size();
	for(int i=0; i<=row; i++) {
		if(solution[i][col]=='Q') return false;
	}

	for(int i=row-1, j=col+1; i>=0 and j<n; i--, j++) {
		if(solution[i][j]=='Q') return false;
	}

	for(int i=row-1, j=col-1; i>=0 and j>=0; i--, j--) {
		if(solution[i][j]=='Q') return false;
	}
	return true;
}

void backtrack(vector<vector<char>>&solution, int row, int n) {
	if(row==n) {
		return;
	}
	for(int col=0; col<n; col++) {
		if(is_safe(solution, row, col)) {
			solution[row][col]='Q';
			backtrack(solution, row+1, n);
			solution[row][col]='*';
		}
	}
}

vector<vector<char>>board(int n) {
	vector<vector<char>>solution(n, vector<char>(n, '*'));
	backtrack(solution, 0, n);
	return solution;
}

int main() {
	int n;
	cin>>n;
	vector<vector<char>>ans = board(n);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}