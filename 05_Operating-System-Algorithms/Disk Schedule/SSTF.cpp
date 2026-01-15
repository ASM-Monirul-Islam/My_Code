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

    int seek_time = 0, completed = 0, current = head;
    vector<bool> done(n, false);

    while(completed < n) {
        int idx = -1, mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(!done[i] && abs(current - requests[i]) < mn) {
                mn = abs(current - requests[i]);
                idx = i;
            }
        }
        seek_time += mn;
        current = requests[idx];
        done[idx] = true;
        completed++;
    }

    cout << "Total Seek Time: " << seek_time << endl;
    cout << "Average Seek Time: " << (double)seek_time / n << endl;
    return 0;
}
