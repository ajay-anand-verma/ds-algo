#include <bits/stdc++.h>
using namespace std;

void array_101(){
	int arr[] = {12, 67, 36, 88, 30};
	cout<<"Array: "<<endl;
	for(auto x: arr)
		cout<<x<<" ";
	cout<<endl;

	cout<<"Ascending:"<<endl;
	sort(arr, arr+5);
	for(auto x: arr)
		cout<<x<<" ";
	cout<<endl;

	cout<<"Descending:"<<endl;
	reverse(arr, arr+5);
	for(auto x: arr)
		cout<<x<<" ";
	cout<<endl;
}

void vector_101(){
	vector<int> v;
	int ar[] = {10, 34, 90, 34, 9, -1, 89, 5, 23, 78, -220, 45};
	v.assign(ar, ar+sizeof(ar)/sizeof(int));
	cout<<"Vector size: "<<v.size()<<endl<<endl;
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;

	cout<<"Ascending"<<endl;
	sort(v.begin(), v.end());
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;

	cout<<"Descending"<<endl;
	sort(v.rbegin(), v.rend());
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;

	cout<<"Shuffled"<<endl;
//	random_shuffle(v.begin(), v.end()); // method 1
	shuffle(v.begin(), v.end(), default_random_engine(10)); // method 2: preferred one
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;

	
}

void vector_102(){
	// Partial sort
	vector<int> v;
	int ar[] = {10, 34, 90, 34, 9, -1, 89, 5, 23, 78, -220, 45};
	v.assign(ar, ar+sizeof(ar)/sizeof(int));

	cout<<"-->\tVector"<<endl;
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl<<endl;

	cout<<"-->\tPartial sort"<<endl;
	partial_sort(v.begin(), v.begin()+2, v.end()); // sort till first 2 items
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl<<endl;

	cout<<"-->\tComplete sort"<<endl;
	sort(v.begin(), v.end());
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl<<endl;

	cout<<"-->\tPartial sorting array"<<endl;
	partial_sort(ar, ar+2, ar+sizeof(ar)/sizeof(ar[0]));
	for(auto x: ar)
		cout<<x<<" ";
	cout<<endl<<endl;

}

int main(){
	vector_102();
	
	return 0;
}
