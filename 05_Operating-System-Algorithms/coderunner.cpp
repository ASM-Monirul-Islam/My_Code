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

    unordered_set<int> memory;
    unordered_map<int, int> lastUsed;

    int hits = 0, misses = 0;

    cout << "\nPage Status:\n";

    for (int i = 0; i < n; i++) {
        int page = pages[i];

        if (memory.find(page) != memory.end()) {
            hits++;
            cout << page << " -> HIT" << endl;
        }
        else {
            misses++;

            if (memory.size() < capacity) {
                memory.insert(page);
            }
            else {
                int lruPage = -1, oldest = INT_MAX;

                for (int p : memory) {
                    if (lastUsed[p] < oldest) {
                        oldest = lastUsed[p];
                        lruPage = p;
                    }
                }

                memory.erase(lruPage);
                memory.insert(page);
            }

            cout << page << " -> MISS" << endl;
        }

        lastUsed[page] = i;
    }

    double hitRatio = (double) hits / (hits + misses);
    double missRatio = (double) misses / (hits + misses);

    cout << "\nTotal Hits: " << hits << endl;
    cout << "Total Misses: " << misses << endl;
    cout << "Hit Ratio: " << hitRatio << endl;
    cout << "Miss Ratio: " << missRatio << endl;

    return 0;
}
