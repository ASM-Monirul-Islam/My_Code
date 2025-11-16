#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];

    int maxSum = INT_MIN;
 
    for (int top = 0; top < n; ++top) {
        vector<int> temp(m, 0);
        for (int bottom = top; bottom < n; ++bottom) {
         
            for (int col = 0; col < m; ++col)
                temp[col] += grid[bottom][col];
 
            int currSum = 0;
            for (int col = 0; col < m; ++col) {
                currSum = max(temp[col], currSum + temp[col]);
                maxSum = max(maxSum, currSum);
            }
        }
    }

    cout << maxSum << "\n";
    return 0;
}