#include<bits/stdc++.h>
using namespace std;

int main() {

    int n_process, n_resource;
    cout << "Enter the number of process and resources: ";
    cin >> n_process >> n_resource;
    vector<vector<int>> allocation(n_process, vector<int>(n_resource));
    vector<vector<int>> maxNeed(n_process, vector<int>(n_resource));
    vector<vector<int>> need(n_process, vector<int>(n_resource));
    vector<int> available(n_resource);

    cout << "Enter Allocation Matrix (" << n_process << "X" << n_resource << "): " << endl;
    for (int i = 0; i < n_process; i++)
        for (int j = 0; j < n_resource; j++)
            cin >> allocation[i][j];

    cout << "Enter Max Needs Matrix (" << n_process << "X" << n_resource << "): " << endl;
    for (int i = 0; i < n_process; i++)
        for (int j = 0; j < n_resource; j++)
            cin >> maxNeed[i][j];

    cout << "Enter Available Resources (" << n_resource << "): " << endl;
    for (int j = 0; j < n_resource; j++)
        cin >> available[j];

    for (int i = 0; i < n_process; i++)
        for (int j = 0; j < n_resource; j++)
            need[i][j] = maxNeed[i][j] - allocation[i][j];

    vector<bool> finished(n_process, false);
    vector<int> safeSeq;
    int count = 0;

    while (count < n_process) {
        bool found = false;
        for (int i = 0; i < n_process; i++) {
            if (!finished[i]) {
                bool canExecute = true;
                for (int j = 0; j < n_resource; j++) {
                    if (need[i][j] > available[j]) {
                        canExecute = false;
                        break;
                    }
                }
                if (canExecute) {
                    for (int j = 0; j < n_resource; j++)
                        available[j] += allocation[i][j];
                    safeSeq.push_back(i);
                    finished[i] = true;
                    found = true;
                    count++;
                }
            }
        }
        if (!found) {
            cout << "System is in an UNSAFE STATE\n";
            return 0;
        }
    }

    cout << "System is in a SAFE STATE\nSafe Sequence: ";
    for (int i = 0; i < n_process; i++) {
        cout << "P" << safeSeq[i];
        if (i != n_process - 1) cout << " -> ";
    }
    cout << "\n";
    return 0;
}
