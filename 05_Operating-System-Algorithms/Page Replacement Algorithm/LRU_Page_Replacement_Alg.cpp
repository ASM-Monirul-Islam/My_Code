#include <bits/stdc++.h>
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
    unordered_map<int, int> lastUsed;
    int hits = 0, misses = 0;
    cout << "\nPage Status:\n";
    for (int i = 0; i < n; i++) {
        int page = pages[i];
        if (s.find(page) != s.end()) {
            hits++;
            cout << page << " -> HIT" << endl;
        } 
        else {
            misses++;
            if (s.size() < capacity) {
                s.insert(page);
            } 
            else {
                int lru_page = -1, lru_time = INT_MAX;

                for (int p : s) {
                    if (lastUsed[p] < lru_time) {
                        lru_time = lastUsed[p];
                        lru_page = p;
                    }
                }
                s.erase(lru_page);
                s.insert(page);
            }
            cout << page << " -> MISS" << endl;
        }

        lastUsed[page] = i;
    }
    double hitRatio = (double)hits / (hits + misses);
    double missRatio = (double)misses / (hits + misses);
    cout << "\nTotal Hits: " << hits << endl;
    cout << "Total Misses: " << misses << endl;
    cout << "Hit Ratio: " << hitRatio << endl;
    cout << "Miss Ratio: " << missRatio << endl;
    return 0;
}
