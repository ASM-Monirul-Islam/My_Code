#include<bits/stdc++.h>
using namespace std;

struct process {
	int id, burst_time, waiting_time, turn_around_time;
};

int main() {
	int n;
	cin>>n;
	vector<process>p(n);
	for(int i=0; i<n; i++) {
		cin>>p[i].burst_time;
		p[i].id=i+1;
	}
	p[0].waiting_time=0;
	p[0].turn_around_time = p[0].waiting_time+p[0].burst_time;
	for(int i=1; i<n; i++) {
		p[i].waiting_time=p[i-1].burst_time+p[i-1].waiting_time;
		p[i].turn_around_time=p[i].burst_time+p[i].waiting_time;
	}
	double avg_wt, avg_tat, total_wt=0.0, total_tat=0.0;
	for(int i=0; i<n; i++) {
		total_wt+=p[i].waiting_time;
		total_tat+=p[i].turn_around_time;
	}
	avg_wt=total_wt/n;
	avg_tat=total_tat/n;
	cout<<"Process\t\tBurst Time\tWaiting Time\tTurn Around Time"<<endl;
	for(int i=0; i<n; i++) {
		cout<<"P"<<p[i].id<<"\t\t"<<p[i].burst_time<<"\t\t"<<p[i].waiting_time<<"\t\t"<<p[i].turn_around_time<<endl;
	}
	cout<<"Average Waiting Time: "<<avg_wt<<endl;
	cout<<"Average Turn Around Time: "<<avg_tat<<endl;
	return 0;
}