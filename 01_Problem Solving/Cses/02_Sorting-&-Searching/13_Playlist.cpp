#include<bits/stdc++.h>
using namespace std;

long long uniqueSequence(vector<long long>&songs) {
	unordered_map<long long, long long>freq;
	long long left=0, maxSeq=0, n=songs.size();
	for(long long right=0; right<n; right++) {
		freq[songs[right]]++;

		while(freq[songs[right]]>1) {
			freq[songs[left]]--;
			// if(freq[songs[left]]==0) freq.erase(songs[left]);
			left++;
		}

		maxSeq=max(maxSeq, right-left+1);
	}
	return maxSeq;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin>>n;
	vector<long long>songs(n);
	for (long long i=0; i<n; i++) {
		cin>>songs[i];
	}
	cout<<uniqueSequence(songs)<<endl;
	return 0;
}