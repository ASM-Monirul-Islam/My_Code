#include<bits/stdc++.h>
using namespace std;

bool is_safe(vector<string>&board, int row, int col, int n) {
	for(int i=row-1; i>=0; i--) {
		if(board[i][col]=='Q') return false;
	}
	for(int i=row-1, j=col-1; i>=0 and j>=0; i--, j--) {
		if(board[i][j]=='Q') return false;
	}
	for(int i=row-1, j=col+1; i>=0 and j<n; i--, j++) {
		if(board[i][j]=='Q') return false;
	}
	return true;
}

void backtrack(vector<vector<string>>&solution, vector<string>&board, int row, int n){
	if(row==n) {
		solution.push_back(board);
		return;
	}
	for(int col=0; col<n; col++) {
		if(is_safe(board, row, col, n)) {
			board[row][col]='Q';
			backtrack(solution, board, row+1, n);
			board[row][col]='-';
		}
	}
}

vector<vector<string>>solve_n_queens(int n) {
	vector<vector<string>>solution;
	vector<string>board(n, string(n, '-'));
	backtrack(solution, board, 0, n);
	return solution;
}

int main() {
	int n;
	cin>>n;
	vector<vector<string>>solution = solve_n_queens(n);
	for(int i=0; i<solution.size(); i++) {
		cout<<"Solution "<<i+1<<": "<<endl;
		for(auto &row:solution[i]) {
			cout<<row<<endl;
		}
		cout<<endl;
	}
	return 0;
}