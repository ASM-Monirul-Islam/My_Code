#include<bits/stdc++.h>
using namespace std;

int main() {
	array<int, 5>arr1 = {5,1,4,2,3};
	array<int, 5>arr2;
	cout<<arr1.size()<<endl; //5
	cout<<arr1.at(3)<<endl; //2
	cout<<arr1[3]<<endl; //2
	cout<<arr1.front()<<endl; //5
	cout<<arr1.back()<<endl; //3
	cout<<arr1.max_size()<<endl; //5
	cout<<sizeof(arr1)<<endl; //20
	arr2.fill(2);
	for(auto i: arr2){
		cout<<i<<" "; //2 2 2 2 2
	}
	cout<<endl;
	return 0;
}