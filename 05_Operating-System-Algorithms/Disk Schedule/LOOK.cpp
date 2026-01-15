#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, head;
    cout << "Enter number of requests: ";
    cin >> n;
    vector<int> requests(n);
    cout << "Enter requests: ";
    for(int i = 0; i < n; i++) cin >> requests[i];
    cout << "Enter initial head position: ";
    cin >> head;

    vector<int> left, right;
    for(int r : requests) {
        if(r < head) left.push_back(r);
        else right.push_back(r);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int seek_time = 0, current = head;

    // Move right first
    for(int r : right) {
        seek_time += abs(current - r);
        current = r;
        cout << r << " ";
    }
    for(int i = left.size() - 1; i >= 0; i--) {
        seek_time += abs(current - left[i]);
        current = left[i];
        cout << left[i] << " ";
    }

    cout << "\nTotal Seek Time: " << seek_time << endl;
    cout << "Average Seek Time: " << (double)seek_time / n << endl;
    return 0;
}
