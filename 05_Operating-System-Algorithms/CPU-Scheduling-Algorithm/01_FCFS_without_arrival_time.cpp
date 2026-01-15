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

struct process {
	int id, burst_time, completion_time, turn_around_time, waiting_time;
	int arrival_time=0;
};

int main() {
	

	int n;
	cout<<"Enter the number of process: ";
	cin>>n;

	vector<process>p(n);
	cout<<"Enter burst time for each process: "<<endl;

	for(int i=0; i<n; i++) {
		cin>>p[i].burst_time;
		p[i].id=i+1;
	}
	
	int current_time=0;
	double total_wt=0.0, avg_wt;
	for(int i=0; i<n; i++) {
		current_time+=p[i].burst_time;
		p[i].completion_time=current_time;
		p[i].turn_around_time = p[i].completion_time - p[i].arrival_time;
		p[i].waiting_time = p[i].turn_around_time - p[i].burst_time;
		total_wt += p[i].waiting_time;
	}

	avg_wt = total_wt/n;

	cout<<"Process\t\tBurst Time\tArrival Time\tCompletion Time\t\tTurn Around Time\tWaiting Time"<<endl;

	for(auto &i: p) {
		cout<<i.id<<"\t\t"
		<<i.burst_time<<"\t\t"
		<<i.arrival_time<<"\t\t"
		<<i.completion_time<<"\t\t\t"
		<<i.turn_around_time<<"\t\t\t"
		<<i.waiting_time<<endl;
	}

	cout<<"Average waiting time: "<<avg_wt<<endl;
	return 0;
}