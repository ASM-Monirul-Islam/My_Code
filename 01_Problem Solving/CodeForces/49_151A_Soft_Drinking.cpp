#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	/*
	n = number of friends
	k = bottles of soft drinks 
	each bottle have =>
		l = ml of drink
		c = number of limes
		d = slices of each limes
		p = grams of salt
	to make a toast =>
		nl = ml of the drinks
		a slice of lime
		np = grams of salt
	*/
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drinks = k*l;
	int slices = c*d;
	int drinksNeed = drinks/nl;
	int saltNeed = p/np;
	int minToasts = min(slices, min(drinksNeed, saltNeed));
	cout<<minToasts/n<<endl;
	return 0;
}