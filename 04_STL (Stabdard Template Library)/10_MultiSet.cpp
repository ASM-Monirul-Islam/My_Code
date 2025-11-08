/*
What is multiset?
A sorted associative container that stores elements in a specific order (ascending by default).
Duplicates are allowed.
Under the hood, it’s implemented as a balanced binary search tree (usually Red-Black Tree).
All operations like insert, erase, find, count, etc. work in O(log n) time.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	// Declaring the multiset
	multiset<int>s1;

	// 1.Insert()
	s1.insert(5);
	s1.insert(4);
	s1.insert(1);
	s1.insert(3);
	s1.insert(5);

	for(auto &i:s1) {
		cout<<i<<" "; //Output: 1 3 4 5 5
	}
	cout<<endl;

	// 2. find()
	auto it = s1.find(5);
	if(it != s1.end()) {
		cout<<*it<<endl; //Output: 5
	}

	// 3. erase()
	s1.erase(s1.find(5)); //erases only one 5
	for(auto &i:s1) {
		cout<<i<<" "; //Output: 1 3 4 5 
	}
	cout<<endl;

	s1.insert(5);

	s1.erase(5); //erases all the occurences of 5
	for(auto &i:s1) {
		cout<<i<<" "; //Output: 1 3 4 
	}
	cout<<endl;

	// 4. count()
	cout<<s1.count(5)<<endl; //Output: 0

	multiset<int> ms = {3,5,5,5,6,7,8};

	// 5. lower_bound(val) - returns the first element >= val;
	cout << *ms.lower_bound(4) <<endl;  // Output: 5

	// 6. upper_bound(val) - returns the first element >= val;
	cout << *ms.upper_bound(6) <<endl;  // Output: 7

	// 7. equal_range(val) 
	auto range = ms.equal_range(5);
	for(auto i=range.first; i!=range.second; i++) {
		cout<<*i<<" "; //Output: 5 5 5
	}
	cout<<endl;
	return 0;
}