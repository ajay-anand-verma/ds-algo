#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi; 
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main(){
	int N, u, v, x;
	vi w;
	vii EdgeList;
	cin>>N;
	
	for(int i=0; i<N-1; i++){
		cin>>u>>v;
		EdgeList.emplace_back(u-1, v-1);
	}
	
	w.assign(N, 0);
	for(int i=0; i<N; i++) cin>>w[i];
	
	for(int i=0; i<N-1; i++){
		cin>>x;
		x = x - 1;
		// remove x-th edge from EdgeList
		//
		// Calculate special value and print it
	}


	return 0;
}

