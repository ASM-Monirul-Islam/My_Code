#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, capacity;
    cout << "Enter number of pages: ";
    cin >> n;
    vector<int> pages(n);
    cout << "Enter page references: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    cout << "Enter number of frames: ";
    cin >> capacity;
    unordered_set<int> s;
    queue<int> q;
    int hits = 0, misses = 0;
    cout << "\nPage Status:\n";
    for (int page : pages) {
        if (s.find(page) != s.end()) {
            hits++;
            cout << page << " -> HIT" << endl;
        }
        else {
            misses++;
            if (s.size() < capacity) {
                s.insert(page);
                q.push(page);
            }
            else {
                int oldest = q.front();
                q.pop();
                s.erase(oldest);

                s.insert(page);
                q.push(page);
            }
            cout << page << " -> MISS" << endl;
        }
    }
    double hitRatio  = (double)hits / (hits + misses);
    double missRatio = (double)misses / (hits + misses);
    cout << "\nTotal Hits: " << hits << endl;
    cout << "Total Misses: " << misses << endl;
    cout << "Hit Ratio: " << hitRatio << endl;
    cout << "Miss Ratio: " << missRatio << endl;

    return 0;
}
