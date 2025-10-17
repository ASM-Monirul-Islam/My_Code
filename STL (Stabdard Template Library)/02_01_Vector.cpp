#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int>v1;
	vector<int>v2(5);
	vector<int>v3(5,1);
	vector<int>v4={1,2,3,4,5};


	// 01. Traversing Elements
	for(auto i:v4){
		cout<<i<<" ";
	}
	// Output: 1 2 3 4 5
	cout<<endl;


	// 02. push_back() - adds element at the end
	// 03. pop_back() - removes last element
	v4.push_back(6); //v4={1,2,3,4,5,6} 
	v4.pop_back(); //v4={1,2,3,4,5}

	// 04. size() - returns the number of elements
	// 05. capacity() - returns the maximum size
	// 06. max_size() - returns the storage allocated
	cout<<v4.size()<<endl; //5
	cout<<v4.capacity()<<endl; //10
	cout<<v4.max_size()<<endl; //1073741823


	// 07. resize() - changes the size of the vector
	v2.resize(10); //v2.size() = 10


	// 08. empty() - checks whether the vector is empty
	cout<<v1.empty()<<endl; //1
	cout<<v2.empty()<<endl; //0

	// 09. front() - returns the first elements
	// 10. back() - returns the last elements
	cout<<v4.front()<<endl; //1
	cout<<v4.back()<<endl; //5

	// 11. insert(v.begin()+index, element) - insert element at specific index
	v4.insert(v4.begin()+2, 8); // v4={1,2,8,3,4,5} (inserting value 8 at index 2)
	v4.insert(v4.begin()+4, 3, 7); //v4={1,2,8,3,7,7,7,4,5} (inserting value 7 at index 4, 3 times)
	
	// 12. erase(v.begin()+index) - removes elements from specific index
	v4.erase(v4.begin()+2); //v4={1,2,3,7,7,7,4,5} (removed the element from index 2)
	v4.erase(v4.begin()+3, v4.begin()+6); //v4={1,2,3,4,5} (removed elements in range [3,6)
	v4.erase(find(v4.begin(), v4.end(), 3)); //v4={1,2,4,5} (deletes 3 from v4)
	

	// 13. clear() - removes all elements
	v2.push_back(2); //v2={2}
	v2.clear(); //v2={}

	// 14. swap() - swap the elements of the vector
	v4.swap(v2); //v2={1,2,4,5} and v4={}

	// 15. reverse() - reverse the vector
	reverse(v2.begin(), v2.end()); //v2={5,4,2,1}

	// 16. sort() - sorts the vector
	sort(v2.begin(), v2.end()); //v2={1,2,4,5} (sorts in ascending order)
	sort(v2.rbegin(), v2.rend()); //v2={5,4,2,1} (sorts in descending order)

	// 17. copying a vector to another vector
	vector<int>v5 = v2; // v5={5,4,2,1}
	vector<int>v6(v2); //v6={5,4,2,1}

	// 18. Duplicate elements removing technique
	vector<int>v7 ={1,2,7,7,11,7,8,8};
	sort(v7.begin(), v7.end());
	auto i = unique(v7.begin(), v7.end());
	v7.erase(i, v7.end()); 
	//Output: v7 ={1,2,7,8,11}

	// 19. fill() - assigns specific elements in a range
	vector<int>v8(5);
	fill(v8.begin(), v8.end(), 9); //v8 = {9,9,9,9,9}
	fill(v8.begin()+1, v8.end(), 1); //v8 = {9,1,1,1,1}
	fill(v8.begin()+1, v8.begin()+3, 2); //v8 ={9,2,2,1,1}
	fill(v8.begin()+1, v8.end()-1, 8); //v8={9,8,8,8,1}

	// 20. max_element(v.begin(), v.end()) - returns the max element
	cout<<*max_element(v7.begin(), v7.end())<<endl; //11

	// 21. min_element(v.begin(), v.end()) - returns the min element
	cout<<*min_element(v7.begin(), v7.end())<<endl; //1

	// 22. count(v.begin(), v.end(), target) -  counts the occurences
	vector<int>v9 ={1,2,2,4,2,5,2};
	cout<<count(v9.begin(), v9.end(), 2)<<endl; //4

	// 23. binary_search(v.begin(), v.end(), target) - returns boolean value
	cout<<binary_search(v9.begin(), v9.end(), 5)<<endl; //1 (true)

	// 24. find(v.begin(), v.end(), target)-v.begin(); - returns the location
	cout<<find(v9.begin(), v9.end(), 5)-v9.begin()<<endl; //5
	return 0;
}