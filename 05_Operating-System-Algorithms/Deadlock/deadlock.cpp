#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define SUM(x) accumulate(x.begin(), x.end(), 0);
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

int main() {
	
	int processes, resources;
	cout<<"Enter the number of processes and resources: ";
	cin>>processes>>resources;
	vector<vector<int>>allocation(processes, vector<int>(resources));
	vector<vector<int>>max(processes, vector<int>(resources));
	vector<vector<int>>need(processes, vector<int>(resources));
	vector<int>instances(resources);
	vector<int>available(resources);
	cout<<"Enter total instances for each resources respectively: ";
	for(int i=0; i<resources; i++) {
		cout<<"Resource "<<i+1<<" : ";
		cin>>instances[i];
	}
	cout<<"Enter the allocation matrix: "<<endl;
	for(int i=0; i<processes; i++) {
		for(int j=0; j<resources; j++) {
			cin>>allocation[i][j];
		}
	}
	cout<<"Enter max matrix: "<<endl;
	for(int i=0; i<processes; i++) {
		for(int j=0; j<resources; j++) {
			cin>>max[i][j];
			need[i][j]=max[i][j]-allocation[i][j];
		}
	}
	for(int i=0; i<resources; i++) {
		int alloc_sum=0;
		for(int j=0; j<processes; j++) {
			alloc_sum+=allocation[j][i];
		}
		available[i]=instances[i]-alloc_sum;
	}
	cout<<"\tNeed Matrix: "<<endl<<endl;
	for(int i=0; i<processes; i++) {
		for(int j=0; j<resources; j++) {
			cout<<need[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\tAvailable: "<<endl;
	for(auto &i: available) {
		cout<<i<<" ";
	}
	cout<<endl;

	vector<bool>finished(processes, false);
	vector<int>safeSequence;
	int completed = 0;

	while(completed<processes) {
		bool isSafe = false;
		for(int i=0; i<processes; i++) {
			if(!finished[i]) {
				bool canExecute = true;
				for(int j=0; j<resources; j++) {
					if(need[i][j] > available[j]) {
						canExecute=false;
						break;
					}
				}
				if(canExecute) {
					for(int j=0; j<resources; j++) {
						available[j]+=allocation[i][j];
					}
					safeSequence.pub(i);
					finished[i]=true;
					isSafe = true;
					completed++;
				}
			}
		}
		if(!isSafe) {
			cout<<"System is in UNSAFE state"<<endl;
			return 0;
		}
	}
	cout<<"System is in SAFE state"<<endl;
	cout<<"Safe Sequence: ";
	for(int i=0; i<processes; i++) {
		cout<<"P"<<safeSequence[i];
		if(i != processes-1) cout<<" ->";
	}
	cout<<endl;
	return 0;
}