#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, r;
    cout << "Enter number of processes: ";
    cin >> p;
    cout << "Enter number of resources: ";
    cin >> r;

    int alloc[p][r], maxNeed[p][r], total[r];
    int avail[r];

    cout << "Enter total instances of each resource:\n";
    for(int j = 0; j < r; j++) cin >> total[j];

    cout << "Enter Allocation Matrix:\n";
    for(int i = 0; i < p; i++)
        for(int j = 0; j < r; j++)
            cin >> alloc[i][j];

    cout << "Enter Max Matrix:\n";
    for(int i = 0; i < p; i++)
        for(int j = 0; j < r; j++)
            cin >> maxNeed[i][j];

    // Calculate Available matrix
    for(int j = 0; j < r; j++) {
        int sum_alloc = 0;
        for(int i = 0; i < p; i++) sum_alloc += alloc[i][j];
        avail[j] = total[j] - sum_alloc;
    }

    int need[p][r];
    for(int i = 0; i < p; i++)
        for(int j = 0; j < r; j++)
            need[i][j] = maxNeed[i][j] - alloc[i][j];

    int done[p] = {0}, safeSeq[p], idx = 0;

    for(int k = 0; k < p; k++) {
        for(int i = 0; i < p; i++) {
            if(!done[i]) {
                int flag = 1;
                for(int j = 0; j < r; j++) {
                    if(need[i][j] > avail[j]) {
                        flag = 0; break;
                    }
                }
                if(flag) {
                    for(int j = 0; j < r; j++)
                        avail[j] += alloc[i][j];

                    safeSeq[idx++] = i;
                    done[i] = 1;
                }
            }
        }
    }

    int safe = 1;
    for(int i = 0; i < p; i++)
        if(!done[i]) safe = 0;

    if(safe) {
        cout << "\nSAFE Sequence: ";
        for(int i = 0; i < p; i++) cout << "P" << safeSeq[i] << " ";
        cout << endl;
    } else {
        cout << "\nSystem is NOT in safe state.\n";
    }

    return 0;
}
