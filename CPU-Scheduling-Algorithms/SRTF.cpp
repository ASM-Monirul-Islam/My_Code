#include<bits/stdc++.h>
using namespace std;

struct process {
	int id, arrival_time, burst_time, completion_time, remaining_time, waiting_time, turn_around_time;
};

int main() {
	int n, completed=0, current_time=0;
	double avg_wt, avg_tat, total_wt=0.0, total_tat=0.0;
	cin>>n;
	vector<process>p(n);
	for(int i=0; i<n; i++) {
		cin>>p[i].arrival_time>>p[i].burst_time;
		p[i].id=i+1;
		p[i].remaining_time=p[i].burst_time;
	}
	while(completed<n) {
		int idx = -1;
		for(int i=0; i<n; i++) {
			if(p[i].arrival_time<=current_time and p[i].remaining_time>0 and (idx == -1 or p[i].remaining_time<p[idx].remaining_time)) {
				idx = i;
			}
		}
		if(idx != -1) {
			p[idx].remaining_time--;
			current_time++;
			if(p[idx].remaining_time==0) {
				p[idx].completion_time=current_time;
				p[idx].turn_around_time=p[idx].completion_time-p[idx].arrival_time;
				p[idx].waiting_time  = p[idx].turn_around_time-p[idx].burst_time;
				total_wt+=p[idx].waiting_time;
				total_tat+=p[idx].turn_around_time;
				completed++;
			}
		}
	}
	avg_wt=total_wt/n;
	avg_tat=total_tat/n;
	cout<<"Process\t\tArrival Time\tBurst Time\tWaiting Time\tTurn Around Time"<<endl;
	for(int i=0; i<n; i++) {
		cout<<"P"<<p[i].id<<"\t\t"<<p[i].arrival_time<<"\t\t"<<p[i].burst_time<<"\t\t"<<p[i].waiting_time<<"\t\t"<<p[i].turn_around_time<<endl;
	}
	cout<<"Average Waiting Time: "<<avg_wt<<endl;
	cout<<"Average Turn Around Time: "<<avg_tat<<endl;
	return 0;
}