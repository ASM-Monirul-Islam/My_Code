#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();  

    while (T--) {
        string s;
        getline(cin, s);
 
        vector<char> realstr;
        for (int i = 0; i < (int)s.size(); i++) {
            if (i + 1 < (int)s.size() && s[i] == '\\' && s[i + 1] == '0') {
                realstr.push_back('\0'); 
                i++;
            } else {
                realstr.push_back(s[i]);
            }
        }
 
        int slen = 0;
        while (slen < (int)realstr.size() && realstr[slen] != '\0')
            slen++;
 
        int ssize = realstr.size() + 1;

        cout << ssize << " " << slen << "\n";
    }
    return 0;
}
