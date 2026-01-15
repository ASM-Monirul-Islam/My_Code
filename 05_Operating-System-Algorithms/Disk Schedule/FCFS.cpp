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

    int seek_time = 0, current = head;
    for(int r : requests) {
        seek_time += abs(current - r);
        current = r;
    }

    cout << "Total Seek Time: " << seek_time << endl;
    cout << "Average Seek Time: " << (double)seek_time / n << endl;
    return 0;
}
