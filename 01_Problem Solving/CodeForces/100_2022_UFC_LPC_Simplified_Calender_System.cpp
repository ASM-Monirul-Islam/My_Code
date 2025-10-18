#include<bits/stdc++.h>
using namespace std;

int main() {
    int d1, m1, y1, d2, m2, y2, days1, days2, days, n;
    cin>>d1>>m1>>y1>>n;
    cin>>d2>>m2>>y2;
    days1 = (y1*360) + (m1-1)*30 + d1;
    days2 = (y2*360) + (m2-1)*30 +d2;

    days = abs(days2-days1);
    days = (days+n)%7;
    if(days==0) days=7;
    cout<<days<<endl;
    return 0;
}