#include<bits/stdc++.h>
using namespace std;

bool valid(int r, int c, int i, int j)
{
    return i<r and j<c and i>=0 and j>=0;
}

int covid_spread(vector<vector<int>>&hospital)
{

    int rows[4] = {-1, 0, 0, 1};
    int cols[4] = {0, -1, 1, 0};

    int r = hospital.size();
    int c = hospital[0].size();

    queue<pair<int, int>>q;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(hospital[i][j]==2) q.push({i, j});
        }
    }

    int time=-1;

    while(!q.empty()) {

        time++;
        int size = q.size();

        while(size--) {
            auto p = q.front();
            q.pop();
            int i=p.first;
            int j=p.second;

            for(int k=0; k<4; k++) {
                if(valid(r, c, i+rows[k], j+cols[k]) and hospital[i+rows[k]][j+cols[k]]==1) {
                    hospital[i+rows[k]][j+cols[k]]=2;
                    q.push({i+rows[k], j+cols[k]});
                }
            }
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(hospital[i][j]==1) {
                return -1;
            }
        }
    }
    return time;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int r, c;
	cin>>r>>c;
	vector<vector<int>>hospital(r, vector<int>(c));
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin>>hospital[i][j];
		}
	}
    int ans = covid_spread(hospital);
    if(ans == -1)
    {
        cout<<"Not spread completely"<<endl;
    }else
    {
        cout<<ans<<endl;
    }
	return 0;
}
