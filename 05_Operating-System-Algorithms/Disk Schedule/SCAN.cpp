#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, head, disk_size;
    cout << "Enter number of requests: ";
    cin >> n;
    vector<int> requests(n);
    cout << "Enter requests: ";
    for(int i = 0; i < n; i++) cin >> requests[i];
    cout << "Enter initial head position: ";
    cin >> head;
    cout << "Enter disk size: ";
    cin >> disk_size;

    vector<int> left, right;
    for(int r : requests) {
        if(r < head) left.push_back(r);
        else right.push_back(r);
    }
    left.push_back(0); // End
    right.push_back(disk_size - 1); // End

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int seek_time = 0, current = head;

    // Move right first
    for(int r : right) {
        seek_time += abs(current - r);
        current = r;
        cout << r << " ";
    }
    // Move left
    for(int i = left.size() - 1; i >= 0; i--) {
        seek_time += abs(current - left[i]);
        current = left[i];
        cout << left[i] << " ";
    }

    cout << "\nTotal Seek Time: " << seek_time << endl;
    cout << "Average Seek Time: " << (double)seek_time / n << endl;
    return 0;
}