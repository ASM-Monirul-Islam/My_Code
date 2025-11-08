#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    double total = 0.0;
    const double BTC_TO_JPY = 380000.0;

    for (int i = 0; i < N; ++i) {
        double x;
        string u;
        cin >> x >> u;

        if (u == "JPY") {
            total += x;
        } else if (u == "BTC") {
            total += x * BTC_TO_JPY;
        }
    }

    cout << fixed <<setprecision(10) << total << endl;
    return 0;
}
