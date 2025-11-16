#include <iostream>
using namespace std;

int main() {
    int p, r;
    cout << "Enter number of processes and resources: ";
    cin >> p >> r;

    int allocation[10][10], maxNeed[10][10], need[10][10];
    int available[10], finish[10], safeSeq[10];
    int count = 0;

    cout << "Enter Allocation Matrix:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            cin >> allocation[i][j];

    cout << "Enter Maximum Need Matrix:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            cin >> maxNeed[i][j];

    cout << "Enter Available Resources:\n";
    for (int j = 0; j < r; j++)
        cin >> available[j];

    for (int i = 0; i < p; i++) {
        finish[i] = 0;
        for (int j = 0; j < r; j++)
            need[i][j] = maxNeed[i][j] - allocation[i][j];
    }

    while (count < p) {
        bool found = false;
        for (int i = 0; i < p; i++) {
            if (finish[i] == 0) {
                bool possible = true;
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > available[j]) {
                        possible = false;
                        break;
                    }
                }
                if (possible) {
                    for (int j = 0; j < r; j++)
                        available[j] += allocation[i][j];
                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "System is in UNSAFE STATE\n";
            return 0;
        }
    }

    cout << "System is in SAFE STATE\nSafe Sequence: ";
    for (int i = 0; i < p; i++) {
        cout << "P" << safeSeq[i];
        if (i != p - 1) cout << " -> ";
    }
    cout << endl;

    return 0;
}
