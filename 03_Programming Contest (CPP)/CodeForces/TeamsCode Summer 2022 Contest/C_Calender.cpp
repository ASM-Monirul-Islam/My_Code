#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
 
    array<int, 12> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

     
    array<int, 13> prefix = {0};
    for (int i = 1; i <= 12; ++i)
        prefix[i] = prefix[i - 1] + days_in_month[i - 1];

    vector<bool> busy(366, false);  

    for (int i = 0; i < N; ++i) {
        int A, B, C;
        cin >> A >> B >> C;

        int start_day = prefix[A - 1] + B;  

        for (int d = start_day; d <= 365; d += C)
            busy[d] = true;
    }

   
    int max_gap = 0, current_gap = 0;

    for (int day = 1; day <= 365; ++day) {
        if (!busy[day]) {
            current_gap++;
            max_gap = max(max_gap, current_gap);
        } else {
            current_gap = 0;
        }
    }

    cout << max_gap << '\n';
    return 0;
}