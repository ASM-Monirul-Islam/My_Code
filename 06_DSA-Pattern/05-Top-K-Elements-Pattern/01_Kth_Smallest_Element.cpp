/*
Problem: Kth Smallest Element in an Array

You are given an array of integers 'v' of size 'n', and an integer 'k'.
Your task is to find the kth smallest element in the array.

Input Format:
- The first line contains an integer 'n' — the number of elements in the array.
- The second line contains 'n' space-separated integers — the elements of the array.
- The third line contains an integer 'k'.

Output Format:
Print a single integer — the kth smallest element in the array.

Constraints:
1 ≤ k ≤ n ≤ 10^5
-10^9 ≤ v[i] ≤ 10^9

Example:
Input:
6
7 10 4 3 20 15
3

Output:
7

Explanation:
After sorting the array [3, 4, 7, 10, 15, 20],
the 3rd smallest element is 7.
*/


#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v, int n, int k) {
    priority_queue<int>p;
    for(int i=0; i<k; i++) {
        p.push(v[i]);
    }
    for(int i=k; i<n; i++) {
        if(p.top()>v[i]) {
            p.pop();
            p.push(v[i]);
        }
    }
    return p.top();
}

int main() {
    int n, k;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    cin>>k;
    int ans = solve(v, n, k);
    cout<<ans<<endl;
    return 0;
}