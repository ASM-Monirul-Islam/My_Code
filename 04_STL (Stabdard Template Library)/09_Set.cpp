#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// Declaring the set
	set<int>s;

	// 1.Insert()----------------------------------------
	s.insert(5);
	s.insert(4);
	s.insert(1);
	s.insert(3);
	s.insert(5);

	for(auto &i:s) {
		cout<<i<<" "; //Output: 1 3 4 5 
	}
	cout<<endl;

	// 2. find()--------------------------------------------
	auto it = s.find(5);
	if(it != s.end()) {
		cout<<*it<<endl; //Output: 5
	}

	// 3. erase()----------------------------------------------
	s.erase(s.find(5)); //erases only one 5
	for(auto &i:s) {
		cout<<i<<" "; //Output: 1 3 4
	}
	cout<<endl;

	// 4. count()-------------------------------------------------
	cout<<s.count(5)<<endl; //Output: 0

	set<int> ms = {3,5,5,5,6,7,8};

	// 5. lower_bound(val) - returns the first element >= val;----------
	cout << *ms.lower_bound(4) <<endl;  // Output: 5

	// 6. upper_bound(val) - returns the first element >= val;-----------
	cout << *ms.upper_bound(6) <<endl;  // Output: 7

	// 7. equal_range(val) -----------------------------------------------
	auto range = ms.equal_range(5);
	for(auto i=range.first; i!=range.second; i++) {
		cout<<*i<<" "; //Output: 5
	}
	cout<<endl;


	/*-------------------------------------------------------------
	By default, the set sorts in ascending order
	but the order can be customized by following method:
	*/

	set<int, greater<int>>st = {3,5,5,5,6,7,8};
	for(auto &i:st) {
		cout<<i<<" "; //Output: 8 7 6 5 3
	}
	cout<<endl;
	//--------------------------------------------------------------

	// 8. *next(it) and *prev(it) - finds the next and the previous element
	// 								of an specific element;
	set<int>s2={1,2,3,4,5,6,7,8,9};
	auto it2 = s2.find(4);
	cout<<*prev(it2)<<endl; //3
	cout<<*next(it2)<<endl; //5

	// 9. *s.begin() - returns the smallest element
	cout<<*s2.begin()<<endl; //1
	// 10. *s.rbegin() - returns the largetst element
	cout<<*s2.rbegin()<<endl; //9
	return 0;
}