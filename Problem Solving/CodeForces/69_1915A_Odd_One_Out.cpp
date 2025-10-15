#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, uniq;
    
    cin>>t;
    while(t--) {
        vector<int>v(3);
        for(int i=0; i<3; i++) {
            cin>>v[i];
        }
        vector<int>temp(v);
        sort(temp.begin(), temp.end());
        int cnt = count(temp.begin(), temp.end(), temp[0]);
        if(cnt == 1) {
            uniq = temp[0];
        }else {
            uniq = temp[2];
        }
        cout<<uniq<<endl;
        v.clear();
    }

    return 0;
}